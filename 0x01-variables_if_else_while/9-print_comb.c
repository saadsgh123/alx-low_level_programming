/**
 * main - Prints all the possible comibination of digits.
 * followed by a new line
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i);
putchar(',');
}
putchar('\n');
return (0);
}
