/**
 * main - Prints all possible different combinations of two digits
 * followed by a new line
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
int i;
int j;
for (i = 48; i < 58; i++)
{
for (j = 49; j < 58; j++)
{
putchar(i);
putchar(j);
if (i != 57 || j != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
}
}
return (0);
}
