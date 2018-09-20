/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:41:04 by baavril           #+#    #+#             */
/*   Updated: 2018/09/19 08:54:13 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opp.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	return (0);
}

void	operation(int a, char *op, int b)
{
	int nb;
	int i;
	int bol;

	i = 0;
	nb = 0;
	bol = 0;
	while (i < 6)
	{
		if (ft_strcmp(op, g_opptab[i].str) == 0)
		{
			nb = g_opptab[i].ft_op(a, b);
			bol = 1;
		}
		i++;
	}
	if (bol == 0)
	{
		ft_putstr("error : only [ + - * / % ] are accepted.\n");
		return ;
	}
	ft_putnbr(nb);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_strcmp(argv[2], g_opptab[3].str) == 0 && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_strcmp(argv[2], g_opptab[4].str) == 0 && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	operation(a, argv[2], b);
	ft_usage(a, b);
	return (0);
}
