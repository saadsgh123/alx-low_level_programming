#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int i, sum, n;

sum = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
sum += pass[i] + 33;
putchar(pass[i] + 33);
if (sum >= 2772)
break;
}
n = 2772 - sum;
while (n > 0)
{
char valid_char = rand() % 78 + 33;
putchar(valid_char);
n -= valid_char - 33;
}
return (0);
}
