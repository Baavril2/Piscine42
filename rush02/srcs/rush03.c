/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:35:11 by cempassi          #+#    #+#             */
/*   Updated: 2018/09/16 23:40:17 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

int 	check_chars(char check, char str)
{
	if (check == str)
		return (0);
	return (1);
}

bool	line_cmp(t_rush *rush, t_list *list, int flag)
{
	if (rush->cur_x > rush->x)
	{
		list->index -= 1;
		return (true);
	}
	if (list->index == list->len)
		list = list->next;
	if (rush->cur_y == 1 || rush->cur_y == rush->y)
	{
		if ((rush->cur_y == 1 && rush->cur_x == 1) ||
				(rush->cur_y == rush->y && rush->cur_x == 1))
			flag = check_chars('A', list->str[list->index]);
		else if ((rush->cur_y == 1 && rush->cur_x == rush->x) || 
				(rush->cur_y == rush->y && rush->cur_x == rush->x))
			flag = check_chars('C', list->str[list->index]);
		else
			flag = check_chars('B', list->str[list->index]);
	}
	else
		if (rush->cur_x == 1 || rush->cur_x == rush->x)
		{
			flag = check_chars('B', list->str[list->index]);
		}
		else
			flag = check_chars(' ', list->str[list->index]);
	rush->cur_x += 1;
	return (flag == 1? false : line_cmp(rush, list, 0));
}

bool	rush_cmp(t_rush *rush, t_list *list)
{
	if (rush->x <= 0 || rush->y <= 0)
		return (false) ;
	while (rush->cur_y <= rush->y)
	{
		rush->cur_x = 1;
		if (line_cmp(rush, list, 0) == false)
			return (false);
		rush->cur_y += 1;
	}
	return (true);
}
