#include "list.h"

void	push_back(t_list **list, void *content)
{
	t_list	*tmp;
	t_list	*node;

	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	node = create_list(content);
	if (!node)
		return ;
	node->next = tmp->next;
	tmp->next = node;
}
