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

if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
putchar(35);
}
putchar('\n');
}
}
}
