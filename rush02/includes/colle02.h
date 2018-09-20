/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:46:01 by cempassi          #+#    #+#             */
/*   Updated: 2018/09/16 23:09:58 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stdlib.h>
# include <stdbool.h>
# define BUFF 128

typedef	struct	s_list
{
	int				len;
	int				index;
	char			*str;
	struct	s_list	*next;
}				t_list;

typedef struct	s_rush
{
	int		x;
	int		y;
	int		cur_x;
	int		cur_y;
	char	*str;
}				t_rush;

int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strndup(char *src, unsigned int n);
bool	rush_cmp(t_rush *rush, t_list *list);
#endif
