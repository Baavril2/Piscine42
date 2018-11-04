#include "libft.h"

void	ft_swap(int *a, int *b)
{
	int bus;

	bus = *a;
	*a = *b;
	*b = bus;
}
