/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14.
* followed by a new line.
* Return: 0
*/
#include "main.h"
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
