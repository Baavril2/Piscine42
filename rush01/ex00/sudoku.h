/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:49:05 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 23:15:04 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define GRIDSIZE 9
# define FALSE 1
# define TRUE 0

void	destroy_grid(char **grid);
void	print_error(void);
int		check_lin_out(char v, int i, int j, char **grid);
int		check_col_out(char v, int i, int j, char **grid);
int		check_square_out(char v, int i, int j, char **grid);
int		check_count(char **grid);
int		check_lin_in(char v, int i, int j, char **grid);
int		check_col_in(char v, int i, int j, char **grid);
int		check_square_in(char v, int i, int j, char **grid);
int		check_in(char v, int i, int j, char **grid);
int		check_out(char **grid);
char	*stock_lin(char *lin);
void	display_sudoku(char **grid);
int		backtrack(char **grid, int index_pos);
int		backtrack_rev(char **grid, int index_pos);
int		check_grid(char **grid1, char **grid2);

#endif
