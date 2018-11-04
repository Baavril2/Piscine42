#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{

	while(*alst)
	{
		(del)((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
		*alst = (*alst)->next;
	}
}
