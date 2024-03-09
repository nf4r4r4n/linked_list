#include "list.h"

unsigned int	list_size(t_list **list)
{
	unsigned int	size;
	t_list			*tmp;

	size = 0;
	tmp = *list;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}
