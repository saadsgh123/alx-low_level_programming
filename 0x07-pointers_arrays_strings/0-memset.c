#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the character to add.
 * @n: the number of bytes
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; ++i)
{
s[i] = b;
}
return (s);
}
