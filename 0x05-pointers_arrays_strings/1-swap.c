#include "main.h"
/**
 * swap_int - function that swap two integers
 * @a: the first integer.
 * @b: the second integer.
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
