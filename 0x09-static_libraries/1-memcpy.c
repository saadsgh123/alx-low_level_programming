#include "main.h"
/**
 * _memcpy - function that fills memory with a constant byte.
 * @dest: destination
 * @src: source
 * @n: the number of bytes
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *newdest = dest;
int i;
for (i = 0; n > 0; ++i)
{
dest[i] = *src;
src++;
n--;
}
return (newdest);
}
