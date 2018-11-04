#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char *bus;
	
	bus = *s1;
	*s1 = *s2;
	*s2 = bus;
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = i + 1; 
	if (i < ac)
	{
		while (j < ac)
		{
			while (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;
		}
		j = i + 1;
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return(0);
}
