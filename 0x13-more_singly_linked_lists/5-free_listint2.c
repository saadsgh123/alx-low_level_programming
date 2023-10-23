#include "lists.h"
/**
 * free_listint2 - returns the number of elements in a linked lists
 * @head: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	listint_t *current;

	while (*head)
	{
		current = (*head)->next;

		free(*head);
		*head = current;
	}
	*head = NULL;
}
