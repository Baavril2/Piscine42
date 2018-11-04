#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	while(src[i])
		i++;
	if(!(dest = (char*)malloc(sizeof(char) * (i + 1))))
		return(0);
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main()
{
	char str[100] = "bonjour";
	printf("%s", ft_strdup(str));


}

