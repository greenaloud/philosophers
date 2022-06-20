#ifndef SETT_H
# define SETT_H

typedef struct s_sett
{
	int	nof;
	int	ttd;
	int	tte;
	int	tts;
	int	met;
}	t_sett;

//디버그용 제출시 삭제
void	print_sett(t_sett *sett);

int		init_sett(int argc, char **argv, t_sett *sett);

#endif
