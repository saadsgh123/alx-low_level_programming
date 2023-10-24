#include "lists.h"
/**
 * insert_nodeint_at_index - singly linked list
 * @head: integer
 * @idx: points to the next node
 * @n: data (n).
 * Return: head pointer.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp || !head)
		return (NULL);

	ptr = (*head);

	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	temp->n = n;
	temp->next = ptr->next;
	ptr->next = temp;

	return ((*head));
}
