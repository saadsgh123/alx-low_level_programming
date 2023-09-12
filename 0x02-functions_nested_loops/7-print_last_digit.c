/**
 * print_last_digit - function return the last digits of a number.
 * @n: is the parameter checked
 * Return: Always 0.
 */
#include "main.h"
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
{
	r = -r;
	_putchar(r + '0');
}
	return (r);
}
