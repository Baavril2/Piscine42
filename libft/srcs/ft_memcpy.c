#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	t_byte *bdest;
	t_byte *bsrc;
	
	bdest = (t_byte*)dest;
	bsrc = (t_byte*)src;
	while (n--)
	{
		*bdest = *bsrc;
		bdest++;
		bsrc++;
	}	
	return(dest);
}


