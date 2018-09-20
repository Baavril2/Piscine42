/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 22:45:00 by baavril           #+#    #+#             */
/*   Updated: 2018/08/29 14:42:49 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char i, char c, char b)
{
	ft_putchar(i);
	ft_putchar(c);
	ft_putchar(b);
	if (i < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char c;
	char b;

	i = '0';
	while (i <= '7')
	{
		c = i + 1;
		while (c <= '8')
		{
			b = c + 1;
			while (b <= '9')
			{
				ft_print(i, c, b);
				b++;
			}
			c++;
		}
		i++;
	}
}
