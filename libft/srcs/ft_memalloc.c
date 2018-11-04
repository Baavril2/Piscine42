#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;
	
	if(!(mem = malloc(sizeof(size) || size == 0)))
		return (NULL);
	ft_bzero(mem, size);
	return(mem);
}	
