#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	
	if (!s1 || !s2)
		return (NULL);
	if (!(join = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return(NULL);
	return(ft_strcat(ft_strcpy(join, s1), s2));
}
