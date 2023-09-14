/**
* print_square - function that draws a diagonal line on the terminal.
* The line should end with a \n.
* @size: para checked
* Return: void.
*/
#include "main.h"
void print_square(int size)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
