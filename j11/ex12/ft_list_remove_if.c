/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:14:02 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 16:04:45 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*nod;
	t_list	*next;

	nod = *begin_list;
	while (nod != NULL)
	{
		if (cmp(nod->data, data_ref) == 0)
		{
			next = nod->next;
			free(nod);
			nod = next;
		}
		else
		{
			next = nod->next;
			nod = next;
		}
	}
	*begin_list = NULL;
}
