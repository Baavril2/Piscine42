/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:50:43 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 23:08:54 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_lin_in(char v, int i, int j, char **grid)
{
	int col;

	col = 0;
	while (col < GRIDSIZE)
	{
		if (grid[i][col] == v && j != col)
			return (FALSE);
		col++;
	}
	return (TRUE);
}

int		check_col_in(char v, int i, int j, char **grid)
{
	int lin;

	lin = 0;
	while (lin < GRIDSIZE)
	{
		if (grid[lin][j] == v && i != lin)
			return (FALSE);
		lin++;
	}
	return (TRUE);
}

int		check_square_in(char v, int i, int j, char **grid)
{
	int block_i;
	int block_j;
	int i_check;
	int j_check;

	block_i = i - (i % 3);
	block_j = j - (j % 3);
	i_check = block_i;
	while (i_check < block_i + 3)
	{
		j_check = block_j;
		while (j_check < block_j + 3)
		{
			if (grid[i_check][j_check] == v && i != i_check && j != j_check)
				return (FALSE);
			j_check++;
		}
		i_check++;
	}
	return (TRUE);
}

int		check_in(char v, int i, int j, char **grid)
{
	if ((check_lin_in(v, i, j, grid) == FALSE)
			|| (check_col_in(v, i, j, grid) == FALSE)
			|| (check_square_in(v, i, j, grid) == FALSE))
		return (FALSE);
	return (TRUE);
}
