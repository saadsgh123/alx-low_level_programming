#include "lists.h"
/**
 * pop_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: n.
 */
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
