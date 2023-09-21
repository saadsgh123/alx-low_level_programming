#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
char c[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'L'};
int i[] = {4, 3, 0, 7, 1, 4, 3, 0, 1};
int j;
char *new;

while (*n)
{
int isLetter = 0;

for (j = 0; j < 9; ++j)
{
if (*n == c[j])
{
isLetter = 1;

*n = '0' + i[j];
break;
}
}
if (!isLetter)
{
n++;
}
}
return (new);
}
