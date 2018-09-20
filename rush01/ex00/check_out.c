/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:51:07 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 23:09:44 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_lin_out(char v, int i, int j, char **grid)
{
	int col;

	col = 0;
	while (col < GRIDSIZE)
	{
		if (grid[i][col] == v && j != col && grid[i][col] != '0')
			return (FALSE);
		col++;
	}
	return (TRUE);
}

int		check_col_out(char v, int i, int j, char **grid)
{
	int lin;

	lin = 0;
	while (lin < GRIDSIZE)
	{
		if (grid[lin][j] == v && i != lin && grid[lin][j] != '0')
			return (FALSE);
		lin++;
	}
	return (TRUE);
}

int		check_square_out(char v, int i, int j, char **grid)
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
			if (grid[i_check][j_check] == v && i != i_check &&
					j != j_check && grid[i_check][j_check] != '0')
				return (FALSE);
			j_check++;
		}
		i_check++;
	}
	return (TRUE);
}

int		check_chars(char **grid)
{
	int i;
	int j;

	i = 0;
	while (i < GRIDSIZE)
	{
		j = 0;
		while (j < GRIDSIZE)
		{
			if (grid[i][j] < '0' || grid[i][j] > '9')
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int		check_out(char **grid)
{
	int		i;
	int		j;
	char	v;

	i = 0;
	while (i < GRIDSIZE)
	{
		j = 0;
		while (j < GRIDSIZE)
		{
			v = grid[i][j];
			if (check_lin_out(v, i, j, grid) == FALSE ||
					check_col_out(v, i, j, grid) == FALSE ||
					check_square_out(v, i, j, grid) == FALSE)
			{
				return (FALSE);
			}
			j++;
		}
		i++;
	}
	if (check_chars(grid) == FALSE || check_count(grid) == FALSE)
		return (FALSE);
	else
		return (TRUE);
}
