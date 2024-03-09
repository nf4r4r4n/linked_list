#include "list.h"

void	push_front(t_list **list, void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ;
	node->content = content;
	node->next = *list;
	*list = node;
}
