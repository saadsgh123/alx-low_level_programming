#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
char *c = "aAeEoOtTlL";
char *i = "4433007711";
int j;
char *new = n;

while (*n != '\0')
{
int isLetter = 0;
for (j = 0; j < 9; ++j)
{
if (*n == c[j])
{
isLetter = 1;
*n = i[j];
break;
}
}
if (!isLetter)
{
n++;
}
}
return (n);
}
