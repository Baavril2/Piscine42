#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < 41342)
	{
		if ((i * i) == nb)
			return(i);
		i++;
	}
	return (0);
}

int	main()
{
	printf("%d", ft_sqrt(8100));
}

