/**
 * main -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
unsigned long fib1 = 1, fib2 = 2;
int count = 2;
printf("%lu, %lu, ", fib1, fib2);
while (count < 50)
{
unsigned long nextFib = fib1 + fib2;
printf("%lu", nextFib);
if (count < 49)
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
