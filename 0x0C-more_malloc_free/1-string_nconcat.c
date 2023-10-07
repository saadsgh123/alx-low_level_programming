#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - check the code
 * @s1:the first string
 * @s2:the second string
 * @n:the size of character to add.
 * Return: char pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int s1len, s2len, i, j;
char *new;
s1len = length(s1);
s2len = length(s2);

new = malloc(s1len + n);

if (new == NULL)
return (NULL);

for (i = 0; i != s1len + 1; i++)
{
*(new + i) = s1[i];
}

for (j = 0; j < n; ++j)
{
new[s1len + j + 1] = *s2;
s2++;
}

new[s1len + s2len + 2] = '\0';
return (new);
}
/**
 * length - check the code
 * @s:characters to check.
 * Return: length.
 */
int length(char *s)
{
int i = 0;
while (*s)
{
i++;
s++;
}
return (i - 1);
}
