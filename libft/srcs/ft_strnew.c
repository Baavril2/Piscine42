#include "libft.h"

char	*ft_strnew(size_t size)
{
        char *str;

        if(!(str = malloc(sizeof(size + 1) || size == 0)))
                return (NULL);
        ft_bzero(str, size + 1);
        return(str);
}

