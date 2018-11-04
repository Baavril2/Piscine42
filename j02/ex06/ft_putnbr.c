/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:30:21 by baavril           #+#    #+#             */
/*   Updated: 2018/08/29 08:18:11 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int b;

	b = nb;
	if (b < 0)
	{
		ft_putchar('-');
		b = b * (-1);
	}
	if (b <= 9)
	{
		ft_putchar(b + '0');
	}
	if (b > 9)
	{
		ft_putnbr(b / 10);
		ft_putnbr(b % 10);
	}
}

int     main(void)
{
	int b;
	b = -2146473649;
	ft_putnbr(b);
}

