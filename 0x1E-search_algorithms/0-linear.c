#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located
 * Description: Prints a value every time it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (value == array[i])
	{
		return (i);
	}
}
return (-1);
}
