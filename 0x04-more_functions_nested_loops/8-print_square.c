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
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
putchar(35);
}
if (i != 9)
{
putchar('\n');
}
}
}
}
