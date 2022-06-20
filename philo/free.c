#include "free.h"
#include <stdlib.h>
#include <pthread.h>

int	free_ps(pthread_t *ps)
{
	free(ps);
	return (0);
}

int	free_ps_mtx(pthread_t *ps, pthread_mutex_t *mtx, int cnt)
{
	int i;

	free(ps);
	i = 0;
	while (i < cnt)
		pthread_mutex_destroy(&mtx[i++]);
	free(mtx);
	return (0);
}
