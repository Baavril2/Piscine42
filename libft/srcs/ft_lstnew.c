#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *o;
	
	if(!(o = (t_list*)malloc(sizeof(*o))))
		return (NULL);
	if(content == NULL)
	{
		o->content = NULL;
		o->content_size = 0;
	}
	else
	{
		if(!(o->content = malloc(content_size)))
			return(NULL);
		ft_memcpy(o->content, content, content_size);
		o->content_size = content_size;
	}
	o->next = NULL;
	return(o);
}
