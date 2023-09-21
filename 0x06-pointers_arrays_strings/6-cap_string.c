#include "main.h"
/**
 * cap_string - change all first charater for lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *cap_string(char *n)
{
char *new = n;
char prev = ' ';

while (*n)
{
char current = *n;
if (current >= 'a' && current <= 'z')
{
if (prev == ' ' || prev == '\t' || prev == '\n' || prev == ',' ||
prev == ';' || prev == '.' || prev == '!' || prev == '?' ||
prev == '"' || prev == '(' || prev == ')' || prev == '{' || prev == '}')
{
*n -= 32;
}
}
prev = current;
n++;
}
return (new);
}
