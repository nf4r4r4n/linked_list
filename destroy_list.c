#include "list.h"

void	destroy_list(t_list **list)
{
	t_list	*tmp;

	if (!*list)
		return ;
	tmp = *list;
	while (tmp)
		pop_first(&tmp);
	*list = 0;
}
