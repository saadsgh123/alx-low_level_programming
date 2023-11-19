#include "main.h"
/**
 * _puts - function to print string.
 * @str: str to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
