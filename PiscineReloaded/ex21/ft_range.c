#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if(min >= max)
		return(0);
	if(!(tab = malloc(sizeof(int) * (max - min))))
		return(0);
	while (min < max)
	{
		tab[i] = min;
		printf("%d", tab[i]);
		min++;
		i++;
	}
	printf("%ls", tab);
	return (tab);
}

int	main()
{
	ft_range(5, 9);
}
