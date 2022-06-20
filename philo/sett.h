#ifndef SETT_H
# define SETT_H

typedef struct s_sett
{
	int	nop;
	int	ttd;
	int	tte;
	int	tts;
	int	met;
}	t_sett;

int		init_sett(int argc, char **argv, t_sett *sett);

#endif
