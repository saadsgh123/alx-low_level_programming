/**
 * main -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include <stdio.h>

int main(void)
{
unsigned long int fib1 = 1, fib2 = 2;
int count;

printf("%lu", fib1);
for (count = 1; count < 98; count++)
{
printf(", %lu", fib2);
fib2 = fib1 + fib2;
fib1 = fib2 - fib1;
}
printf("\n");
return (0);
}
