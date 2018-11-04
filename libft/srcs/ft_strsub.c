#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = ft_strnew(len);
	if (!s || !sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	return (sub);
}
