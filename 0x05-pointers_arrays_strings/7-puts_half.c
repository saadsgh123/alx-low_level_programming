#include "main.h"
/**
* puts_half - function that prints half of a string, followed by a new line
*
* @s: list of character.
*
* Return: void (Success)
*/
void puts_half(char *s)
{
int i, j, len = 0;

for (j = 0;; ++j)
{
if (*(s + j) == '\0')
{
break;
}
len += 1;
}

for (i = (len + 1) / 2; i < len; ++i)
{
_putchar(s[i]);
}
_putchar('\n');
}
