#include "libft.h"

int	ft_toupper(int c)
{
	return (!ft_islower(c) ? c : c - 32);
}
