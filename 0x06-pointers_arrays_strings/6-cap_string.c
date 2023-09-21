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
while (*n)
{
if ((*n >= 1 && *n <= 47) || (*n >= 58 && *n <= 64) || (*n >= 91 && *n <= 96))
{
if (*(n + 1) >= 'a' && *(n + 1) <= 'z')
{
*(n + 1) = *(n + 1) - ('a' - 'A');
}
}
n++;
}
return (new);
}
