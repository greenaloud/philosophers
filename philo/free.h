#ifndef FREE_H
# define FREE_H

# include <pthread.h>

int	free_ps(pthread_t *ps);
int	free_ps_mtx(pthread_t *ps, pthread_mutex_t *mtx, int cnt);

#endif
