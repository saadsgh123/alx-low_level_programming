#include <stdarg.h>
/**
 * sum_them_all - function that divide two numbers.
 * @n: number of args
 * Return: sum of argument.
 **/
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		int value = va_arg(args, int);

		result += value;
	}
	va_end(args);

	return (result);
}
