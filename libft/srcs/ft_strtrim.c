#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	char *trim;

	i = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	while (s[i])
		i++;
	while (ft_isspace(s[i - 1]))
		i--;
	if (!(trim = ft_strnew(i)))
		return(NULL);
	trim = ft_strncpy(trim, s, i);
	return (trim);
}	
