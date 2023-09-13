/**
 * main -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include <stdio.h>

int main(void)
{
unsigned long fib1 = 1, fib2 = 2, nextFib, sum = 0;

while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
{
sum += fib1;
}

nextFib = fib1 + fib2;
fib1 = fib2;
fib2 = nextFib;
}
printf("%lu\n", sum);
return (0);
}
