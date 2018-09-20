/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 09:17:17 by baavril           #+#    #+#             */
/*   Updated: 2018/09/01 14:42:07 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_lignes(int l)
{
	int i;

	i = 0;
	if(l != 0)
		ft_putchar('A');
	while (i < l - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (l > 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void    ft_mid(int l)
{
	int i;

	i = 0;
	ft_putchar('B');
	while(i < l - 2)
	{
		ft_putchar(' ');
		i++;
	}
	i = 0;
	if(l > 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	ft_compile(int l, int c)
{
	int i;
	
	i = 0;
	if (c != 0)
		ft_lignes(l);
	while (i < c - 2)
	{
		ft_mid(l);
		i++;
	}
	if(c > 1)
	ft_lignes(l);
}

int		main(int argc, char **argv)
{
	if(argc == 3)
		ft_compile(atoi(argv[1]), atoi(argv[2]));
	return(0);
}

