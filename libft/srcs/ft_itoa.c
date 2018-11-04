#include "libft.h"

char	*ft_itoa(int n)
{
	char *res;
	unsigned int j;
	int i;
	int l;
	int s;
	
	l = 10;
	i = 1;
	s = 1;
	if (n < 0)
		s = -1;
	j = s * n;
	while ((j /= 10) != 0 && i++)
		l *= 10;
	if (!(res = malloc(sizeof(*res) * i + 1)))
		return (0);
	i = 0;
	(s == -1 ? res[i] = '-' : i--);
	while (l >= 1 && (l /= 10))
		res[++i] = ((s * n) / l) % 10 + 48;
	res[++i] = '\0';
	return (res);
}
