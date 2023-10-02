#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @a: destination.
 * @b: source.
 * Return: a
 */
char *_strcat(char *a, char *b)
{
int len = length(a);
int i;
for (i = 0; b[i] != '\0' ; ++i)
{
a[len + i] = b[i];
}
a[len + i] = '\0';
return (a);
}
/**
 * length - function that calculate string length
 * @s: string.
 * Return: len
 */
int length(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
