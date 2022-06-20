#include <limits.h>
#include "sett.h"

static int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	long	prev;

	sign = 1;
	result = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		prev = result;
		result = result * 10 + *str - '0';
		if (prev != result / 10 && sign == -1)
			return ((int)LONG_MIN);
		if (prev != result / 10 && sign == 1)
			return ((int)LONG_MAX);
		str++;
	}
	return ((int)(sign * result));
}

int	init_sett(int argc, char **argv, t_sett *sett)
{
	sett->nop = ft_atoi(argv[1]);
	if (sett->nop <= 0)
		return (0);
	sett->ttd = ft_atoi(argv[2]);
	if (sett->ttd <= 0)
		return (0);
	sett->tte = ft_atoi(argv[3]);
	if (sett->tte <= 0)
		return (0);
	sett->tts = ft_atoi(argv[4]);
	if (sett->tts <= 0)
		return (0);
	if (argc == 6)
	{
		sett->met = ft_atoi(argv[5]);
		if (sett->met <= 0)
			return (0);
	}
	else
		sett->met = 0;
	return (1);
}
