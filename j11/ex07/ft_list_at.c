/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:19:40 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 10:16:25 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*nod;
	unsigned int	i;

	nod = begin_list;
	i = 0;
	while (i < nbr && nod != NULL)
	{
		nod = nod->next;
		i++;
	}
	if (nod == NULL && i < nbr)
		return (NULL);
	return (nod);
}
