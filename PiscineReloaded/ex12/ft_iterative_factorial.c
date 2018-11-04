#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	res = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int	main()
{
	printf("%d", ft_iterative_factorial(12));
}
