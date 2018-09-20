/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baavril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:07:41 by baavril           #+#    #+#             */
/*   Updated: 2018/09/20 10:10:30 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	t_list	*next;
	int		i;

	if (ac <= 0)
		return (NULL);
	i = 0;
	next = NULL;
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = next;
		next = elem;
		i++;
	}
	return (elem);
}
