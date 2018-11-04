/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_lin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:47:48 by baavril           #+#    #+#             */
/*   Updated: 2018/09/09 23:11:12 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	*stock_lin(char *lin)
{
	int		col;
	char	*stocked_lin;

	col = 0;
	if (!(stocked_lin = (char *)malloc(sizeof(char) * 10)))
		return (NULL);
	while (col < 9)
	{
		if (lin[col] == '.')
			stocked_lin[col] = '0';
		else if (lin[col] > '0' && lin[col] <= '9')
			stocked_lin[col] = lin[col];
		col++;
	}
	stocked_lin[col] = '\0';
	return (stocked_lin);
}
