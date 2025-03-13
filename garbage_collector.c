#include "garbage_collector.h"

t_garbage	*new_garbage(void *allocated)
{
	t_garbage	*new;

	new = malloc(sizeof(t_garbage));
	if (!new)
		return (NULL);
	new->allocated = allocated;
	new->next = NULL;
	return (new);
}

void	garbage_add_back(t_garbage **lst, t_garbage *new_allocation)
{
	t_garbage	*last;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new_allocation;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	if (last)
		last->next = new_allocation;
}

void	*maloc(size_t size)
{
	t_garbage *new_node;
	char *allocated;

	allocated = malloc(sizeof(char) * size);
	if (!allocated)
		return (NULL);
	new_node = new_garbage(allocated);
	if (!new_node)
		return (NULL);
	garbage_add_back(data()->garbage, new_node);
	return (allocated);
}
t_data *data()
{
	static t_data data;
	return &data;
}
