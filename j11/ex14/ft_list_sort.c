/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:51:33 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 15:54:12 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*a;
	t_list	*b;
	void	*tmp;

	a = *begin_list;
	if (a != NULL)
	{
		while (a->next != NULL)
		{
			b = a->next;
			while (b != NULL)
			{
				if (cmp(a->data, b->data) > 0)
				{
					tmp = a->data;
					a->data = b->data;
					b->data = tmp;
				}
				b = b->next;
			}
			a = a->next;
		}
	}
}
