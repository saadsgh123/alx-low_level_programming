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
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
