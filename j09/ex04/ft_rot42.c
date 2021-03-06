/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot42.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:42:56 by baavril           #+#    #+#             */
/*   Updated: 2018/09/07 13:27:35 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *s)
{
	int i;

	i = -1;
	while (s[++i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (s[i] - 'a' + 42) % 26 + 'a';
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = (s[i] - 'A' + 42) % 26 + 'A';
	}
	return (s);
}
