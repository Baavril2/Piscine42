#include "libft.h"

t_bool	ft_isspace(int c)
{
	return(c == ' ' || (c >= '\t' && c <= '\r'));
}
