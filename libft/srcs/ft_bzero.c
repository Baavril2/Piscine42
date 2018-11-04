#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	char *bus;
	char z;

	z = 0;
	bus = (char *)s;
	while (n--)
		*bus++ = z;
}
