#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * @s: input string.
 */
void print_rev(char *s)
{
	int idx = 0;

	while (s[idx])
	{
		idx++;
	}
	while (idx > 0)
	{
		idx--;
		_putchar(s[idx]);
	}
	_putchar('\n');
}
