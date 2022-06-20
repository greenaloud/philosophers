#include "sett.h"
#include "init.h"
#include "error.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_sett		sett;

	if (argc != 5 && argc != 6)
	{
		argc_error();
		return (1);
	}
	if (init_sett(argc, argv, &sett) == 0)
	{
		argc_value_error();
		return (1);
	}
	if (init_philos(&sett) == 0)
	{
		malloc_error();
		return (1);
	}
	printf("all ended\n");
	return (0);
}
