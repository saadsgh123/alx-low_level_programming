/**
 * _islower - Function that checks for lowercase.
 *
 * @c: paramter to be checked
 *
 * Return: Always 0 or 1 .
 */
#include "main.h"
int _islower(int c)
{
char i;
for (i = 'a'; i <= 'z' ; ++i)
{
if (i == c)
{
return (1);
}
}
return (0);
}
