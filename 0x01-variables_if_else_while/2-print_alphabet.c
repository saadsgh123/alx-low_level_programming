/**
 * main - Print the alphabet in lower case
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
putchar(i);
}
putchar('\n');
return (0);
}
