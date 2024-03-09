#include "list.h"
#include <stdio.h>

int	main(void)
{
	t_list	*list;

	printf("Hello world\n");
	list = create_list("World");
	push_front(&list, "Hello");
	printf("Size: %u\n", list_size(&list));
	destroy_list(&list);
}
