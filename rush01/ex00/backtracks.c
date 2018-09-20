/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:49:36 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 23:08:21 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		backtrack(char **grid, int index_pos)
{
	int i;
	int j;
	int check;

	if (index_pos == 9 * 9)
		return (TRUE);
	i = index_pos / 9;
	j = index_pos % 9;
	if (grid[i][j] != '0')
		return (backtrack(grid, index_pos + 1));
	check = '1';
	while (check <= '9')
	{
		if (check_in(check, i, j, grid) == TRUE)
		{
			grid[i][j] = check;
			if (backtrack(grid, index_pos + 1) == TRUE)
				return (TRUE);
		}
		check++;
	}
	grid[i][j] = '0';
	return (FALSE);
}

int		backtrack_rev(char **grid, int index_pos)
{
	int i;
	int j;
	int check;

	if (index_pos == -1)
		return (TRUE);
	i = index_pos / 9;
	j = index_pos % 9;
	if (grid[i][j] != '0')
		return (backtrack_rev(grid, index_pos - 1));
	check = '1';
	while (check <= '9')
	{
		if (check_in(check, i, j, grid) == TRUE)
		{
			grid[i][j] = check;
			if (backtrack_rev(grid, index_pos - 1) == TRUE)
				return (TRUE);
		}
		check++;
	}
	grid[i][j] = '0';
	return (FALSE);
}

int		check_grid(char **grid1, char **grid2)
{
	int i;
	int j;

	i = 0;
	while (i < GRIDSIZE)
	{
		j = 0;
		while (j < GRIDSIZE)
		{
			if (grid1[i][j] != grid2[i][j])
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}
