#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char *map;
        size_t len;
	unsigned int i;

        if (!s || !f)
                return (NULL) ;
        while (s[len])
                len++;
        if (!(map = malloc(sizeof(len + 1) || len == 0)))
                return (NULL);
	i = 0;
        while (*s)
        {
                *map = f(i,*s);
                map++;
                s++;
		i++;
        }
        map -= len;
        return (map);
}

