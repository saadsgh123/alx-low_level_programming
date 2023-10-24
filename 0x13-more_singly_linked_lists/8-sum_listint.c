#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linkedlist.
 * @head: linked list of type listint_t to print
 *
 * Return: sum of n.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
