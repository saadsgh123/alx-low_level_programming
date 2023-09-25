#include "main.h"
/**
 * _strchr - function that fills memory with a constant byte.
 * @s: destination
 * @c: source
 * Return: pointer or null.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *s != '\0'; ++i)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
