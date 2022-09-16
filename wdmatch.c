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

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	found;
	
	i = 0;
	j = 0;
	found = 1;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (argv[2][j] != argv[1][i])
			{
				j++;
				if (!(argv[2][j]))
				{	
					found = 0;
					break;
				}
			}
			i++;
		}
		if (found == 1)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
