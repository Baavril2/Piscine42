#include "libft.h"

void	ft_print_words_tables(char **tab)
{
	int		c;
	int		i;
	int		j;

	c = 0;
	while (tab[c])
		c++;
	i = 0;
	while (i < c)
	{
		j = 0;
		while (tab[i][j])
			ft_putchar(tab[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
