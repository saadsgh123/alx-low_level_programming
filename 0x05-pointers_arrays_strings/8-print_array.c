#include <stdio.h>
#include "main.h"
/**
* print_array - prints every other character of a string
*
* @a: list of character.
* @n: number of elements.
* Return: void (Success)
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; ++i)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
