#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
	
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_recursive_factorial(atoi(av[1])));
}
