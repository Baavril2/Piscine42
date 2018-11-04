#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t l;

	l = 0;
	while (str[l])
		l++;
	return(l);
}
