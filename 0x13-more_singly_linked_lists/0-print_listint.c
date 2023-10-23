#include <stddef.h>
#include "lists.h"
/**
 * print_listint - function that returns the number of elements and print them.
 * @h: the first element of a list.
 * Return: Always 0.
 */
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
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
