#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int b;
	
	b = (n < 0) ? -n : n;
	if (n > 9) 
		ft_putnbr_fd(b / 10);
	ft_putchar_fd(b % 10 + 48);		
}
