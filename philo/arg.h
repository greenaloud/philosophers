#ifndef ARG_H
# define ARG_H

# include "sett.h"
# include <pthread.h>

typedef struct s_arg
{
	int 			num;
	t_sett			*sett;
	pthread_mutex_t *mtx;
}	t_arg;

#endif
