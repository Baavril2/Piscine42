#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        t_byte *bdest;
        t_byte *bsrc;

        bdest = (t_byte*)dest;
        bsrc = (t_byte*)src;
	if (!n || dest == src)
		return (dest);
	if (src > dest)
	{	
       		while (n--)
       		{
               		*bdest = *bsrc;
               		bdest++;
                	bsrc++;
		}
	}
       	else
	{
		while(n--)
			bdest[n] = bsrc[n];
	}
        return(dest);
}

