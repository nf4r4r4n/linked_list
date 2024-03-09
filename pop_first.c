#include "list.h"

void	pop_first(t_list **list)
{
	t_list	*first;

	if (!*list)
		return ;
	first = *list;
	*list = (*list)->next;
	free(first);
}
