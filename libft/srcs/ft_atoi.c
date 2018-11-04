#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		nb = nb * 10;
		nb = (str[i] - '0') + nb;
		i++;
	}
	return(neg * nb);
}
