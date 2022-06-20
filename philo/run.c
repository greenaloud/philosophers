#include "arg.h"
#include "run.h"
#include <stdio.h>
#include <sys/time.h>

void	*run_thread(void *arg)
{
	t_arg			*parg;
	struct timeval	tv;

	parg = (t_arg *)arg;
	gettimeofday(&tv, NULL);
	printf("%dms philo %d: begin\n", tv.tv_usec, parg->num);
	gettimeofday(&tv, NULL);
	printf("%dms philo %d: end\n", tv.tv_usec, parg->num);
	return (NULL);
}
