#include "libft.h"

t_bool	ft_isprint(int c)
{
	return(c >= 32 && c <= 126);
}
