#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int n=612852475143;
	long int p;

	for (p = 2; p <= n; p++)
	{
		if (n % p == 0)
		{
			n /= p;
			p = p - 1;
		}
	}
	printf("%ld\n", p);

	return (0);
}
