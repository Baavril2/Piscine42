/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:18:42 by baavril           #+#    #+#             */
/*   Updated: 2018/09/19 09:05:47 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		match(char *op)
{
	int ope;

	if (op[0] == '*')
		ope = 0;
	else if (op[0] == '+')
		ope = 1;
	else if (op[0] == '-')
		ope = 2;
	else if (op[0] == '/')
		ope = 3;
	else if (op[0] == '%')
		ope = 4;
	else
		return (-1);
	return (ope);
}

int		do_op(int a, char *op, int c)
{
	int (*operateur[5])(int, int);
	int d;

	operateur[0] = mult;
	operateur[1] = add;
	operateur[2] = sous;
	operateur[3] = div;
	operateur[4] = mod;
	if (c == 0 && op[0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (c == 0 && op[0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	if ((d = match(op)) >= 0)
		ft_putnbr(operateur[d](a, c));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
