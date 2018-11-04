#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_byte *bs1;
	t_byte *bs2;
	size_t i;

	i = 0;	
	bs1 = (t_byte*)s1;
	bs2 = (t_byte*)s2;
	if (!n || s1 == s2)
		return(0);
	while(n-- && bs1[i] == bs2[i])
		i++;
	return(bs1[i] - bs2[i]);
}
