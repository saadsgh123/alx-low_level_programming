/**
 * print_to_98 -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
int step = (n < 98) ? 1 : -1;

for (int i = n; i != 99; i += step)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
