/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:12:32 by baavril           #+#    #+#             */
/*   Updated: 2018/08/30 11:31:27 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int bus;
	int i;

	i = 0;
	bus = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			bus = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = bus;
			i = 0;
		}
		else
			i++;
	}
}
