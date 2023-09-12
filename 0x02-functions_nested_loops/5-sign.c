/**
 * print_sign - function that prints the sign of a number.
 * @n: is the parameter checked
 * Return: Always 0.
 */
#include "main.h"
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
return (0);
}
