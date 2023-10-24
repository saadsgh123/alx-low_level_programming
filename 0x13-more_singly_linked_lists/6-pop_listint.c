#include "lists.h"

int pop_listint(listint_t **head)
{

	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	int data = (*head)->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
