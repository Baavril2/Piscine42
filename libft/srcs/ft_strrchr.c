#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen((char*)s) + 1;
	while (len--)
	{
                if (*(s + len) == c)
                        return ((char*)s + len);
        }
        return (NULL);
}
