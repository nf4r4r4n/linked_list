#ifndef LIST_H
# define LIST_H
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*create_list(void *content);
void			push_front(t_list **list, void *content);
void			push_back(t_list **list, void *content);
void			pop_first(t_list **list);
void			destroy_list(t_list **list);
unsigned int	list_size(t_list **list);

#endif
