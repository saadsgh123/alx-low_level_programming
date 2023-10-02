#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, len = length(dest);
if (n <= len)
{
for (i = 0; i < n ; ++i)
{
dest[len + i] = src[i];
}
}
else
{
for (i = 0; src[i] != '\0' ; ++i)
{
dest[len + i] = src[i];
}
}
dest[len + i] = '\0';
return (dest);
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
