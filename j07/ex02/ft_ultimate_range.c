/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:05:31 by baavril           #+#    #+#             */
/*   Updated: 2018/09/13 16:07:08 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	while (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
