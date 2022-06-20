#include <unistd.h>
#include "error.h"

void	argc_error(void)
{
	write(STDERR_FILENO, "usage: philo num_of_philos time_to_die "
		"time_to_eat time_to_sleep [num_of_times_each_philo_must_eat]\n", 100);
}

void	argc_value_error(void)
{
	write(STDERR_FILENO, "philo: argument value error: "
		"all the arguments should be positive numbers\n", 74);
}

void	malloc_error(void)
{
	write(STDERR_FILENO, "philo: malloc error\n", 20);
}
