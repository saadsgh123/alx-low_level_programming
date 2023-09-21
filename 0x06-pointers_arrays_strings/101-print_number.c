#include "main.h"
/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
unsigned int new = n;
if (n < 0)
{
_putchar('-');
new = -n;
}
if (new / 10 != 0)
{
print_number(new / 10);
}
_putchar(n % 10 + '0');
}
