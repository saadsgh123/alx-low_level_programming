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
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}



	return (NULL);
}
