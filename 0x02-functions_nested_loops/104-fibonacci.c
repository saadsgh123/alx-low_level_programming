/**
 * main -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include <stdio.h>

int main(void)
{
int n = 98;
int fib1 = 1, fib2 = 2, count = 2;

printf("%d, %d, ", fib1, fib2);

while (count < n)
{
int nextFib = fib1 + fib2;

printf("%d", nextFib);

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
count++;
}

return (0);
}
