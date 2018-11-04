#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
        t_byte *bdest;
        t_byte *bsrc;

        bdest = (t_byte*)dest;
        bsrc = (t_byte*)src;
        while (n--)
        {
                *bdest = *bsrc;
		if (*(bsrc - 1) == (t_byte)c)
			return(dest);
                bdest++;
                bsrc++;
        }
        return(NULL);
}

