/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:16:55 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 10:13:47 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*next;

	elem = *begin_list;
	while (elem != NULL)
	{
		next = elem->next;
		free(elem);
		elem = next;
	}
	*begin_list = NULL;
}
