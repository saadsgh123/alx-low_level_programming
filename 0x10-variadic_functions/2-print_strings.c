#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints numbers, followed by a new line..
 * @n: number o args
 * @separator: separator.
 * Return: nothing.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i, j;
	char *value;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	value = va_arg(args, char *);

		if (value != NULL)
			printf("%s", value);
		if (separator != NULL && i != (n - 1))
			printf("%c ", *separator);
	}

	printf("\n");
	va_end(args);

}
