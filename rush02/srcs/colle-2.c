/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:47:02 by cempassi          #+#    #+#             */
/*   Updated: 2018/09/16 23:38:09 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"
#include <unistd.h>

t_list		*add_list(void)
{
	t_list		*tmp;

	tmp =(t_list *)malloc(sizeof(t_list));
	tmp->len = 0;
	tmp->index = 0;
	tmp->str = NULL;
	tmp->next = NULL;
	return (tmp);
}

void		extract_param(t_list *list, int *x, int *y)
{
	int		i;
	int		x_cmp;

	x_cmp = 0;
	i = 0;
	while(list != NULL)
	{
		if(list->str[i] == '\0')
		{
			list = list->next;
			i = 0;
			continue;
		}
		x_cmp = *y != 0 ? x_cmp + 1 : x_cmp;
		if(list->str[i + 1] == '\n' && *y >= 1)
			x_cmp = -1;
		*y = list->str[i] == '\n' ? *y + 1 : *y;
		*x = *y == 0 ? *x + 1 : *x;
		i++;
	}
}

void		destroy_list(t_list *list)
{
	t_list		*next;

	if (list == NULL)
		return ;
	next = list->next;
	free(list->str);
	free(list);
	return (destroy_list(next));
}

void		print_list(t_list *list)
{
	t_list		*next;

	if (list == NULL)
		return ;
	next = list->next;
	return (print_list(next));
}

t_list		*reader(t_list *list)
{
	t_list		*begin_list;
	char		buffer[BUFF];

	begin_list = list == NULL ? NULL : list;
	if (list)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = add_list();
		list = list->next;
	}
	else
		list = add_list();
	list->len = read(0, buffer, BUFF);
	list->str = ft_strndup(buffer, list->len + 1);
	begin_list = begin_list == NULL ? list : begin_list;
	return (list->len == 0 ? begin_list : reader(begin_list));
}

int		main(void)
{
	t_list		*list;
	t_rush		rush00;
	int			x;
	int			y;

	x = 0;
	y = 0;
	list = reader(NULL);
	extract_param(list, &x, &y);
	rush00.x = x;
	rush00.y = y;
	rush00.cur_x = 1;
	rush00.cur_y = 1;
	print_list(list);
	destroy_list(list);
	return (0);
}
