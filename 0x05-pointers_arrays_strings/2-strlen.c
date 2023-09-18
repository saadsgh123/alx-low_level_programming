#include "main.h"
/**
* _strlen - function that returns the length of a string.
*
* @s: character list.
*
* Return: length (Success)
*/
int _strlen(char *s)
{
int len = 0;
for (int i = 0;; ++i)
{
if (*(s + i) == '\0')
{
break;
}
len++;
}
return (len);
}
