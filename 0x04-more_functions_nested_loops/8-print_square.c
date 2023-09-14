/**
* print_square - function that draws a diagonal line on the terminal.
* The line should end with a \n.
* @n: para checked
* Return: void.
*/
#include "main.h"
void print_square(int n)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
