/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolkit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 06:49:38 by cempassi          #+#    #+#             */
/*   Updated: 2018/09/16 23:14:44 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	return (*s1 == *s2 && (*s1 && *s2) && n > 1 ?
			ft_strncmp(s1 + 1, s2 + 1, n - 1) : *s1 - *s2);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*hold;

	hold = dest;
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (hold);
}

char	*ft_strndup(char *src, unsigned int n)
{
	char	*dup;

	if ((dup = malloc(sizeof(char) * n)) == 0)
		return (0);
	dup = ft_strncpy(dup, src, n - 1);
	return (dup);
}
