/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:12:59 by baavril           #+#    #+#             */
/*   Updated: 2018/09/01 13:49:19 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 0;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	i = 1;
	while (i < nb)
	{
		i++;
		if (nb % 2 == 0 || nb % 3 == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
