#include "main.h"
/**
* _puts - function that returns the length of a string.
*
* @str: list of character.
*
* Return: void (Success)
*/
void _puts(char *str)
{
int i;

for (i = 0;; ++i)
{
if (*(str + i) == '\0')
{
break;
}
_putchar(*(str + i));
}
}

