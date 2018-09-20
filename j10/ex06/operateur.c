/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:24:23 by baavril           #+#    #+#             */
/*   Updated: 2018/09/18 09:54:34 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		mult(int nb_a, int nb_b)
{
	return (nb_a * nb_b);
}

int		add(int nb_a, int nb_b)
{
	return (nb_a + nb_b);
}

int		sous(int nb_a, int nb_b)
{
	return (nb_a - nb_b);
}

int		div(int nb_a, int nb_b)
{
	return (nb_a / nb_b);
}

int		mod(int nb_a, int nb_b)
{
	return (nb_a % nb_b);
}
