#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int	counter;

	counter = 0;
	if (begin_list == 0)
		return (0);
	while (begin_list != 0)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}
