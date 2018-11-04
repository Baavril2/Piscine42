#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *o;
	t_list *po;
	t_list *tmp;	

	o = NULL;
	tmp = NULL;
	while (lst)
	{
		if (f(lst))
		{
			f(lst)->next = o;
			o = f(lst);
		}
		lst = lst->next;
	}
	while (o)
	{
		po = o->next;
		o->next = tmp;
		tmp = o;
		o = po;
	}
	o = tmp;
	return(o);
}
