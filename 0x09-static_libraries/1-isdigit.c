/**
* _isdigit - function that checks for a digit (0 through 9).
* @c: character checked
* Return: 0
*/
#include "main.h"
int _isdigit(int c)
{
int i = 48;
while (i < 58)
{
if (i == c)
{
return (1);
}
i++;
}
return (0);
}
