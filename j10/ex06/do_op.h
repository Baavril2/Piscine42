/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:23:05 by baavril           #+#    #+#             */
/*   Updated: 2018/09/19 09:05:33 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		do_op(int a, char *op, int c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		mult(int nb_a, int nb_b);

int		add(int nb_a, int nb_b);

int		sous(int nb_a, int nb_b);

int		div(int nb_a, int nb_b);

int		mod(int nb_a, int nb_b);

#endif
