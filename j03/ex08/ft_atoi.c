/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:28:17 by baavril           #+#    #+#             */
/*   Updated: 2018/08/30 10:09:05 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	neg = 1;
	i = 0;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		nb = nb * 10;
		nb = (str[i] - '0') + nb;
		i++;
	}
	return (neg * nb);
}

int     main(int ac, char **av)
{
        (void)ac;
//      char str[100] = "   --dsfsafd";
        printf("%d\n", ft_atoi(av[1]));
        printf("%d\n", atoi(av[1]));
}

