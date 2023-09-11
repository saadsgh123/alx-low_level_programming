/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
char i;
char e;
for (i = 'a'; 'z' >= i; i++)
{
putchar(i);
}
for (e = 'A'; e <= 'Z'; ++e)
{
putchar(e);
}
putchar('\n');
return (0);
}
