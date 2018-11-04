#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *map;
	size_t len;

        if (!s || !f)
                return (NULL) ;
	while (s[len])
		len++;
	if (!(map = malloc(sizeof(len + 1) || len == 0)))
		return (NULL);
        while (*s)
        {
		*map = f(*s);
                map++;
		s++;
	map -= len;
        }
	return (map);
}
