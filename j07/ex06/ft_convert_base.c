/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:21:28 by baavril           #+#    #+#             */
/*   Updated: 2018/09/14 08:41:05 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		index_base(char c, char *base_from)
{
	int		i;

	i = 0;
	while (base_from[i])
	{
		if (c == base_from[i])
			return (i);
		i++;
	}
	return (-1);
}

int		check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_itoa_base(int nbr, char *base_to, char *str)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	val;
	unsigned int	k;

	b = nbr;
	k = 1;
	i = 0;
	while (base_to[i++] != '\0')
		val = i;
	if (i <= 1 || !check_base(base_to))
		return (0);
	while (nbr / k > 0)
		k *= val;
	i = 0;
	while (k > 1)
	{
		k /= val;
		str[i++] = base_to[(nbr / k) % val];
	}
	str[i] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size;
	int		nb;
	int		i;
	char	*str;

	size = 0;
	i = 0;
	nb = 0;
	while (base_from[size])
		size++;
	if (size <= 1 || !check_base(base_from))
		return (0);
	while (index_base(nbr[i], base_from) != -1)
		nb = nb * size + index_base(nbr[i++], base_from);
	if (!(str = (char*)malloc(sizeof(char) * 33)))
		return (0);
	ft_itoa_base(nb, base_to, str);
	base_to[size] = '\0';
	return (str);
}
