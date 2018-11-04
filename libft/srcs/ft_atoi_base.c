#include "libft.h"
#include <stdio.h>

int	index_base(char c, char *base)
{
	int i;
	
	i = 0;
	while (base[i])
	{
		if(base[i] == c)
			return(i);
		i++;
	}
	return(-1);
}


int	check_base(char *base)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return(0);
		j = i + 1;
		while(base[j])
		{
			if (base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}


int	ft_atoi_base(char *str, char *base)
{
	int size;
	int nb;
	int i;
	int neg;

	neg = 1;
	i = 0;
	size = 0;
	nb = 0;
	while(base[size])
		size++;
	if(size <= 1 || !check_base(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if(str[i++] == '-')
			neg = -1;
	while (index_base(str[i], base) != -1)
		nb = nb * size + (index_base(str[i++], base));
	if (str[i] != '\0' && str[i] != '-' && str[i] != '+'
		&& index_base(str[i], base) == -1)
		return(0);
	return(nb * neg);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi_base(av[1], av[2]));
	return(0);
}
