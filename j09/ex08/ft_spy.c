/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:30:08 by baavril           #+#    #+#             */
/*   Updated: 2018/09/07 15:32:02 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	while (str[a] != '\0' && str[a] == ' ')
		a++;
	b = 0;
	while ((to_find[b] == str[a + b]
				|| (to_find[b] - 32) == str[a + b]) && to_find[b])
	{
		b++;
		if (to_find[b] == '\0')
			return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	*s3;
	int		i;

	s1 = "bauer";
	s2 = "president";
	s3 = "attack";
	i = 1;
	while (i < argc)
	{
		if (ft_strstr(argv[i], s1) == 1 || ft_strstr(argv[i], s2) == 1
				|| ft_strstr(argv[i], s3) == 1)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
