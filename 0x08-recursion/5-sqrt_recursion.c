#include "main.h"
int _sqrt_recursion_helper(int n, int start, int end);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursion_helper(n, 1, n));
}

/**
 * _sqrt_recursion_helper - recursive helper function to find the square root
 * @n: number to calculate the square root of
 * @start: the start value for searching
 * @end: the end value for searching
 *
 * Return: the resulting square root, or -1 if not found
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid = 0;
int pow;
pow = mid * mid;

if (start <= end)
{
mid = (start + end) / 2;

if (pow == n)
return (mid);

if (pow > n)
return (_sqrt_recursion_helper(n, start, mid - 1));
else
return (_sqrt_recursion_helper(n, mid + 1, end));
}
return (-1);
}
