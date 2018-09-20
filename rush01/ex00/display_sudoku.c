/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:48:12 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 22:56:20 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		if (i != 8)
			ft_putchar(' ');
		i++;
	}
}

void	display_sudoku(char **grid)
{
	int i;

	i = 0;
	while (i < 9)
	{
		ft_putstr(grid[i]);
		ft_putchar('\n');
		i++;
	}
}
