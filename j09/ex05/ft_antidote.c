/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:07:40 by baavril           #+#    #+#             */
/*   Updated: 2018/09/07 14:46:10 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int result;

	result = 0;
	if ((i < j && i > k) || (i < k && i > j))
		result = i;
	if ((j < i && j > k) || (j < k && j > i))
		result = j;
	if ((k < i && k > j) || (k < j && k > i))
		result = k;
	return (result);
}
