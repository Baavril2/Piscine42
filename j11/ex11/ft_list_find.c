/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:47:17 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 10:26:35 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*nod;

	nod = begin_list;
	while (nod != NULL)
	{
		if (cmp(nod->data, data_ref) == 0)
			return (nod);
		nod = nod->next;
	}
	return (NULL);
}
