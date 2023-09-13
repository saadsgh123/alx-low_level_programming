/**
 * times_table - function that prints 9 time table
 * starting with 0.
 * Return: Always void.
 */
#include "main.h"
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
	{
		int r = i * j;

		_putchar(' ');

		if (r > 10)
	{
		_putchar((r / 10) + '0');
	}
		else
	{
		_putchar(' ');
	}
		_putchar((r % 10) + '0');
		if (i != 9 & j != 9)
	{
		_putchar(',');
	}
	}
		_putchar('\n');
	}
	}
