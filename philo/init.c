#include "arg.h"
#include "run.h"
#include "free.h"
#include "init.h"
#include <stdlib.h>
#include <pthread.h>

int	init_philos(t_sett *sett)
{
	int 			i;
	int 			rv;
	t_arg			*arg;
	pthread_t		*ps;
	pthread_mutex_t *forks;

	ps = malloc(sizeof (*ps) * sett->nop);
	if (ps == NULL)
		return (0);

	forks = malloc(sizeof (*forks) * sett->nop);
	if (forks == NULL)
		return (free_ps(ps));

	i = 0;
	while (i < sett->nop)
	{
		rv = pthread_mutex_init(&forks[i], NULL);
		if (rv != 0)
			return (free_ps_mtx(ps, forks, i));
		i++;
	}

	arg = malloc(sizeof (*arg) * sett->nop);
	if (arg == NULL)
		return (free_ps_mtx(ps, forks, sett->nop));

	i = 0;
	while (i < sett->nop)
	{
		arg[i].num = i + 1;
		arg[i].sett = sett;
		arg[i].mtx = forks;
		pthread_create(&ps[i], NULL, run_thread, (void *)&arg[i]);
		i++;
	}

	i = 1;
	while (i <= sett->nop)
	{
		pthread_join(ps[i], NULL);
		i++;
	}
	return (1);
}
