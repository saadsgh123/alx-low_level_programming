#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; ++i)
{
dest[i] = src[i];
}
for (; i < n; ++i)
{
dest[i] = '\0';
}
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
