/**
 * main -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include <stdio.h>

int main(void)
{
int n = 98;
unsigned long fib1 = 1, fib2 = 2, nextFib;

printf("%lu, %lu, ", fib1, fib2);
for (int count = 2; count < n; count++)
{
nextFib = fib1 + fib2;
printf("%lu", nextFib);
if (count < n - 1)
{
printf(", ");
}
else
{
printf("\n");
}
fib1 = fib2;
fib2 = nextFib;
}
return (0);
}
