/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:01:37 by baavril           #+#    #+#             */
/*   Updated: 2018/09/19 15:09:43 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_base(char *base)
{
	int i;
	int j;

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
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int i;
	long int b;

	i = 0;
	b = nbr;
	while (base[i])
		i++;
	if (i <= 1 || !check_base(base))
		return ;
	if (b < 0)
	{
		ft_putchar('-');
		b = b * (-1);
	}
	if (b >= i)
		ft_putnbr_base(b / i, base);
	ft_putchar(base[b % i]);
}
