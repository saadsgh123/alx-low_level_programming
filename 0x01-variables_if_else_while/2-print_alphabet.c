/**
 * main - Print the alphabet in lower case
 * followed by a new line
 *
 * Return: Always 0.
 */

#include <stdio.h>
int main(void)
{
for (char i = 'a'; 'z' >= i; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
