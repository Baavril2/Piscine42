#include "libft.h"

int     ft_strncmp(char const *s1, char const *s2, size_t n)
{
        size_t i;

        i = 0;
        while(s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
                i++;
        return(s1[i] - s2[i]);
}

