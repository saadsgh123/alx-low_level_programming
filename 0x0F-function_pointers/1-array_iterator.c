#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print name using pointer to function
 * @array: string to add.
 * @size: pointer to function.
 * @action: action pointer.
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if (action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
