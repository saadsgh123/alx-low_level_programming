/**
 * main - Prints all numbers of base 16 in lowercase.
 * followed by a new line
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
