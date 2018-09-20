/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:18:27 by baavril           #+#    #+#             */
/*   Updated: 2018/09/18 18:27:12 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int				i;
	long long int	order;

	if (tab == 0)
		return (1);
	i = 0;
	order = 0;
	while ((i < length - 1) && f(tab[i], tab[i + 1]) == 0)
		i++;
	order = f(tab[i], tab[i + 1]);
	while (++i < length - 1)
	{
		if (order * f(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}
