/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:28:48 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 10:18:02 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*elem;
	t_list	*next;

	prev = NULL;
	elem = *begin_list;
	while (elem != NULL)
	{
		next = elem->next;
		elem->next = prev;
		prev = elem;
		elem = next;
	}
	*begin_list = prev;
}
