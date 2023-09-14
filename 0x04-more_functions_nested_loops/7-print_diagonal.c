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
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
putchar(' ');
}
putchar(92);
putchar('\n');
}
}
