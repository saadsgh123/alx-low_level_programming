/**
* print_triangle - Fizzbuzz
* followed by new line.
* @size: para
* Return: 0 (Success)
*/
#include "main.h"

int print_triangle(int size)
{
int i, x, y;
if (size > 0)
{
for (i = 1; i < size; ++i)
{
for (x = 1; x <= (size - i) ; x++)
{
putchar(' ');
}
for (y = 1; y <= i; ++y)
{
putchar('#');
}
putchar('\n');
}
}
else
{
putchar('\n');
}
return (0);
}
