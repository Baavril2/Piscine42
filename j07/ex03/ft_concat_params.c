/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 08:02:41 by baavril           #+#    #+#             */
/*   Updated: 2018/09/13 16:18:17 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (i < argc)
	{
		j = j + (ft_strlen(argv[i]));
		i++;
	}
	if (!(dest = (char*)malloc(sizeof(char) * (j + 1))))
		return (0);
	i = 1;
	while (i < argc)
	{
		ft_strcat(dest, argv[i]);
		if (i != argc - 1)
			ft_strcat(dest, "\n");
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
