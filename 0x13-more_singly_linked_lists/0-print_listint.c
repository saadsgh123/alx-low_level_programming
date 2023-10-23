#include <stddef.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
