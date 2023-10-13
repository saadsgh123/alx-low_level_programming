#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line..
 * @n: number o f
 * @separator: separator.
 * Return: nothing.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != 3)
			printf("%s", separator);
	}

printf("\n");

}
