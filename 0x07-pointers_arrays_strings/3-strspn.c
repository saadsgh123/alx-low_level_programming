#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to check.
 * @accept: prefix substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int size = 0;

for (i = 0; *s; ++i)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
size++;
break;
}
else if (!accept[j + 1])
{
return (size);
}
}
}
return (size);
}
