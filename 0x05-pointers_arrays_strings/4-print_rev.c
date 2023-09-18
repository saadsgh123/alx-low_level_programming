#include "main.h"
/**
* print_rev - function that prints a string in reverse.
* followed by a new line.
* @s: list of character.
*
* Return: void (Success)
*/
void print_rev(char *s)
{
int i, j;
int len = 0;

for (i = 0;; ++i)
{
if (*(s + i) == '\0')
{
break;
}
len++;
}
for (j = len - 1; j >= 0; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}
