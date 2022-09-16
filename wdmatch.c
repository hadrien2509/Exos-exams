#include <unistd.h>

void	ft_putstr(char *str)
{
	int	k;

	k=0;
	while (str[k])
	{
		write (1, &str[k], 1);
		k++;
	}
}

int	wdmatch(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[2][j] != argv[1][i])
		{
			if (!(argv[2][j]))	
				return (0);
		}
		else
			i++;
		j++;
	}
	return (1);
}


int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (wdmatch(argv))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
