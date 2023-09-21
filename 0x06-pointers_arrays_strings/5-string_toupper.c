#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
char *original = n;
while (*n != '\0')
{
if (*n >= 97 && *n <= 122)
{
*n = *n - 32;
}
n++;
}
return (original);
}
