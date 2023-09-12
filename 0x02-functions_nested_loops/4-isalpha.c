/**
 * _isalpha - Function that checks for alphabetic character.
 *
 * @c: paramter to be checked
 *
 * Return: Always 0 or 1 .
 */
#include "main.h"
int _isalpha(int c)
{
char i , j;
for (i = 'a'; i <= 'z' ; ++i)
{
if (i == c)
{
return (1);
}
}
for (j = 'A'; j <= 'Z' ; ++j)
{
if (j == c)
{
return (1);
}
}
return (0);
}
