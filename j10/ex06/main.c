/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:25:47 by baavril           #+#    #+#             */
/*   Updated: 2018/09/19 08:11:56 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][1] != '\0')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	return (0);
}
