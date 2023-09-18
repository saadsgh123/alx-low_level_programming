#include "main.h"
/**
* puts2 - prints every other character of a string
*
* @s: list of character.
*
* Return: void (Success)
*/
void puts2(char *s)
{
for (int i = 0;; ++i)
{
if (*(s+i)=='\0')
{
break;
}
if (i % 2 == 0)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
