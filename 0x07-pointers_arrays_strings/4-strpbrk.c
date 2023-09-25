#include "main.h"
/**
 * _strpbrk - function that gets the length of a prefix substring.
 * @s: string to check.
 * @accept: prefix substring
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; ++i)
{
for (j = 0; accept[j]; ++j)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
