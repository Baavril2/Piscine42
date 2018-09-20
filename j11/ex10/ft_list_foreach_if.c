/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:10:34 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 10:21:22 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)(void *, void *))
{
	t_list *nod;

	nod = begin_list;
	while (nod != NULL)
	{
		if (cmp(nod->data, data_ref) == 0)
			f(nod->data);
		nod = nod->next;
	}
}
