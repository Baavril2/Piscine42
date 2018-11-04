/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:46:24 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 23:14:44 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_args(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) != 9)
		{
			print_error();
//			write("Pattern error : wrong number of arguments");
			return (FALSE);
		}
		i++;
	}
	return (TRUE);
}

void	stocked_sudoku(char **grid, char **grid_rev, char **argv)
{
	int j;
	int i;

	i = 1;
	j = 0;
	while (i <= GRIDSIZE)
	{
		grid[j] = stock_lin(argv[i]);
		grid_rev[j] = stock_lin(argv[i]);
		j++;
		i++;
	}
}

void	solve_sudoku(char **grid, char **grid_rev)
{
	if (backtrack(grid, 0) == TRUE)
	{
		backtrack_rev(grid_rev, 80);
		if (check_grid(grid, grid_rev) == TRUE)
			display_sudoku(grid);
		else
			print_error();
//			write("solving Error : 2 solutions after backtracks");

	}
	else
		print_error();
//	write("solving error : backtracks found 0 solutions")
	destroy_grid(grid);
	destroy_grid(grid_rev);
}

int		main(int argc, char **argv)
{
	char	**grid;
	char	**grid_rev;

	if (argc != 10)
	{
		print_error();
		return (0);
	}
	if (check_args(argv) == FALSE)
		return (0);
	if (!(grid = (char **)malloc(sizeof(char *) * 9)))
		return (0);
	if (!(grid_rev = (char **)malloc(sizeof(char *) * 9)))
		return (0);
	stocked_sudoku(grid, grid_rev, argv);
	if (check_out(grid) == FALSE)
	{
		destroy_grid(grid);
		destroy_grid(grid_rev);
		print_error();
		return (0);
	}
	solve_sudoku(grid, grid_rev);
	return (0);
}
