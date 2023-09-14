/**
* print_diagonal - function that draws a diagonal line on the terminal.
* The line should end with a \n.
* @n: para checked
* Return: void.
*/
#include "main.h"
void print_diagonal(int n)
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
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
