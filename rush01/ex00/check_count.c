/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:50:13 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 22:39:57 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_count(char **grid)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	while (i < GRIDSIZE)
	{
		j = 0;
		while (j < GRIDSIZE)
		{
			if (grid[i][j] > '0' && grid[i][j] <= '9')
				count++;
			j++;
		}
		i++;
	}
	if (count < 17)
		return (FALSE);
	return (TRUE);
}
