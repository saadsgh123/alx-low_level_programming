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
for (i = 1; i <= size; ++i)
{
for (x = 1; x <= (size - i) ; x++)
{
_putchar(' ');
}
for (y = 1; y <= i; ++y)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return (0);
}
