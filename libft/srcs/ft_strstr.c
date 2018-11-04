#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	
	i = -1;
	while (haystack[++i])
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
