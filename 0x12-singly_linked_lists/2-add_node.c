#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer
 * @str: String
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *n;
size_t len = 0;
if (str == NULL)
{
return (NULL);
}
n = malloc(sizeof(list_t));
if (n == NULL)
{
return (NULL);
}
n->str = strdup(str);
if (n->str == NULL)
{
free(n);
return (NULL);
}
while (str[len])
{
len++;
}
n->len = len;
n->next = *head;
*head = n;

return (n);
}
