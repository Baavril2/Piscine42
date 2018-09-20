/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:26:15 by baavril           #+#    #+#             */
/*   Updated: 2018/09/18 09:46:29 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_atoi(char *str)
{
	int a;
	int r;
	int n;

	a = 0;
	r = 0;
	n = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
		a++;
	if (str[a] == '+')
		a++;
	if (str[a] == '-')
	{
		n = 1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		r = r * 10 + (str[a] - '0');
		a++;
	}
	return (n == 1 ? -r : r);
}

void	ft_putnbr(int nb)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a >= 10)
		ft_putnbr(a / 10);
	ft_putchar((a % 10) + '0');
}
