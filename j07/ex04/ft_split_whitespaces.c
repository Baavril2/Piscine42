/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:29:39 by baavril           #+#    #+#             */
/*   Updated: 2018/09/13 21:14:00 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	counter_word(char *str)
{
	int i;
	int nb_word;

	i = 0;
	nb_word = 0;
	if (!(str[0] == ' ' || str[0] == '\t' || str[0] == '\n'))
		nb_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i] != '\0')
		{
			if (!(str[i + 1] == ' ' || str[i + 1] == '\t'
						|| str[i + 1] == '\n' || str[i + 1] == '\0'))
			{
				nb_word++;
				i++;
			}
		}
		i++;
	}
	return (nb_word);
}

char	**ft_strdup_modif(char *str, int i, char **tab)
{
	int j;
	int nb_char;

	nb_char = 0;
	j = 0;
	while (!(str[j] == '\t' || str[j] == '\n' || str[j] == ' '
				|| str[j] == '\0'))
	{
		nb_char++;
		j++;
	}
	if (!(tab[i] = (char*)malloc(sizeof(char) * (nb_char + 1))))
		return (0);
	j = 0;
	while (!(str[j] == '\t' || str[j] == ' ' || str[j] == '\n'
				|| str[j] == '\0'))
	{
		tab[i][j] = str[j];
		j++;
	}
	tab[i][j] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	k = counter_word(str);
	if (!(tab = (char**)malloc(sizeof(char*) * (k + 1))))
		return (0);
	while (i < k)
	{
		while ((*str == ' ' || *str == '\n' || *str == '\t') && *str != '\0')
			str++;
		ft_strdup_modif(str, i, tab);
		while (!(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\0'))
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
