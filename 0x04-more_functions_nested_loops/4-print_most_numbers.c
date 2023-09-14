/**
* print_most_numbers - function that prints the numbers, from 0 to 9
* followed by a new line.
* @void: void
* Return: void.
*/

#include "main.h"
void print_most_numbers(void)
{
int i = 0;

while (i < 10)
{
if (i != 2 & i != 4)
{
putchar(i + '0');
}
i++;
}
putchar('\n');
}
