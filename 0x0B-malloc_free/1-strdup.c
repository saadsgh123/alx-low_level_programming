#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: 0.
 */
char *_strdup(char *str)
{
int i;
char *new;
int size = str_leng(str, 0);

if (str == NULL)
return (NULL);
 
new = malloc(sizeof(char) * (size + 1));

for (i = 0; i < size; ++i)
{
new[i] = str[i];
}
return (new);
}
/**
 * str_leng - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int str_leng(char *c, int size)
{
while (*c)
{
return (str_leng(c + 1, size + 1));
}
return (size);
}
