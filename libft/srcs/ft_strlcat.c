#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i])
		i++;
	while (src[res])
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while(src[j] && i + 1 <= size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(res);
}
