/**
 * main - Prints the alphabet in lowercase, except q and e
 * followed by a new line
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
char i;
for (i = 'a'; 'z' >= i; i++)
{
if (i == 'q' || i == 'e')
{
}
else
{
putchar(i);
}
}
putchar('\nreturn (0);
}
