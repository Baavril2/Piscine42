#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t l)
{
	size_t res;
	size_t i;

	res = 0;
	i = 0;
	while (src[res])
		res++;
	while (src[i] && i < (l - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(res);
}
