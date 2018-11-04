#include "libft.h"

char    *ft_strnstr(char *haystack, char *needle, size_t size)
{
        size_t i;
	size_t j;

        i = -1;
        while (haystack[++i] && i < size)
        {
                j = 0;
                while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
                {
                        j++;
                        if (!needle[j])
                                return(haystack + i);
                }
        }
        return (0);
}
