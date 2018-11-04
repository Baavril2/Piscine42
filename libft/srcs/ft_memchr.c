#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
        t_byte *sy;

        sy = (t_byte*)s;
        while (n--)
	{
                if(*sy == (t_byte)c)
       			 return(sy);
		sy++;
	}
	return(NULL);
}
