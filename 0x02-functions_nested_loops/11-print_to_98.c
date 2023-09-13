/**
 * print_to_98 -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include "main.h"
void print_to_98(int n)
{
if (n < 98)
{
int i;

for (i = n; i <= 98; ++i)
{
if (i > 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
} 
else
{
_putchar((i % 10) + '0');
}
if (i != 98){
_putchar(',');
}
}
putchar('\n');
} 
else if(n > 98)
{
int i;

for (i = n; i >= 98; --i)
{
if (n > 100)
{
if (i >= 100)
{
int a = i / 10;

_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
}
else if (n < 100) {
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
if (i != 98)
{
_putchar(',');
}
}
_putchar('\n');
}
}
