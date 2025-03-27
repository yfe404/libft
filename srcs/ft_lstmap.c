#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	ptr = head;
	lst = lst->next;
	while (lst)
	{
		ptr->next = ft_lstnew(f(lst->content)); 
		if (!ptr->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		ptr = ptr->next;
	}
	ptr->next = NULL;
	return (head);
}
