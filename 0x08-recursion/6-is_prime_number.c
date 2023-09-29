#include "main.h"
int prime_check(int n, int odd);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (prime_check(n, 3));
}

/**
 * prime_check - calculates if a number is prime recursively
 * @n: number to evaluate
 * @odd: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime_check(int n, int odd)
{
if (n % odd == 0)
{
return (1);
}
if (odd >= n)
{
return (0);
}
return (prime_check(n, odd + 2));
}
