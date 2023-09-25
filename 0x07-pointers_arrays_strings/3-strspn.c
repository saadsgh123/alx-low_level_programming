#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to check.
 * @accept: prefix substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int size = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
size++;
break;
}
else if (!accept[r + 1])
{
return (n);
}
}
s++;
}
return (n);
}
