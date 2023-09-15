/**
 * print_number - prints integers
 * @n: Accepts integer
 *
 * Return: Nothing (always)
 */
#include "main.h"
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n < 10)
{
_putchar(n + '0');
}
else if (n < 100)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n < 1000)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 1000)
{
_putchar((n / 1000) + '0');
_putchar(((n / 100) % 10) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
}
