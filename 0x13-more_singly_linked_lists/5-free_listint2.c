#include "lists.h"
/**
 * free_listint2 - returns the number of elements in a linked lists
 * @head: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}

	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}
