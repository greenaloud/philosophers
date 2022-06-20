#include "sett.h"
#include "error.h"

int	main(int argc, char **argv)
{
	t_sett	sett;

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
	print_sett(&sett);
	return (0);
}
