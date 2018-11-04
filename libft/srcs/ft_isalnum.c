#include "libft.h"

t_bool	ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));
}
