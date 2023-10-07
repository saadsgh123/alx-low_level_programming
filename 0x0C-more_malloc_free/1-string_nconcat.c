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
int s1len, i, j;
char *new;
s1len = length(s1);

new = malloc(s1len + n + 1);

if (new == NULL)
return (NULL);

for (i = 0; i != s1len; i++)
*(new + i) = s1[i];


for (j = 0; j < n; ++j)
{
new[s1len + j] = *s2;
s2++;
}

new[s1len + j] = '\0';
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
return (i);
}
