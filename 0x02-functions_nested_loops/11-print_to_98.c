/**
 * print_to_98 -  that prints all natural numbers from n to 98
 * followed by a new line.
 * @n: paramter to checked
 * Return: Always void.
 */
#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
if (n > 98)
{
int i;

for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
else
{
int i;

for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
}
