/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:03:13 by baavril           #+#    #+#             */
/*   Updated: 2018/09/13 21:13:36 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	counter_word(char *str, char *charset)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	if (!check_separator(str[0], charset))
		nb_word = 1;
	while (str[i] != '\0')
	{
		if (check_separator(str[i], charset) && str[i] != '\0')
		{
			if (!(check_separator(str[i + 1], charset) || str[i + 1] == '\0'))
			{
				nb_word++;
				i++;
			}
		}
		i++;
	}
	return (nb_word);
}

char	**ft_strdup_modif(char *str, int i, char **tab, char *charset)
{
	int j;
	int nb_char;

	nb_char = 0;
	j = 0;
	while (!(check_separator(str[j], charset) || str[j] == '\0'))
	{
		nb_char++;
		j++;
	}
	if (!(tab[i] = malloc(sizeof(char) * (nb_char + 1))))
		return (0);
	j = 0;
	while (!(check_separator(str[j], charset) || str[j] == '\0'))
	{
		tab[i][j] = str[j];
		j++;
	}
	tab[i][j] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	k = counter_word(str, charset);
	if (!(tab = (char**)malloc(sizeof(char*) * (k + 1))))
		return (0);
	while (i < k)
	{
		while (check_separator(*str, charset) && *str != '\0')
			str++;
		ft_strdup_modif(str, i, tab, charset);
		while (!(check_separator(*str, charset) || *str == '\0'))
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
