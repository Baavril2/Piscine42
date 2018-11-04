#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	t_byte *sy;

	sy = (t_byte*)s;
	while (n--)
		*sy++ = (t_byte)c;
	return(s);
}
