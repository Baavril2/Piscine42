/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 22:54:02 by baavril           #+#    #+#             */
/*   Updated: 2018/09/02 23:08:56 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_lignes(int l, char begin, char end)
{
	int i;

	i = 0;
	if (l != 0)
		ft_putchar(begin);
	while (i < l - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (l > 1)
		ft_putchar(end);
}

void	ft_mid(int l)
{
	int i;

	i = 0;
	ft_putchar('B');
	while (i < l - 2)
	{
		ft_putchar(' ');
		i++;
	}
	i = 0;
	if (l > 1)
		ft_putchar('B');
}

void	rush(int l, int c)
{
	int i;

	i = 0;
	if (l > 0 && c > 0 && l < 2147483647 && c < 2147483647)
	{
		ft_lignes(l, 'A', 'C');
		while (i < c - 2)
		{
			ft_putchar('\n');
			ft_mid(l);
			i++;
		}
		ft_putchar('\n');
		if (c > 1)
			ft_lignes(l, 'A', 'C');
	}
	if (c > 1 && l > 0)
		ft_putchar('\n');
	return ;
}
