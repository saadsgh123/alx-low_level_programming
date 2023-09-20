#include "main.h"
/**
 * _strcmp - ffunction that compares two strings.
 * @s1: fist pointer.
 * @s2: second pointer.
 * Return: 15 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 != *s2)
{
return ((*s1 > *s2) ? (15) : (-15));
}
s1++;
s2++;
}
if (*s1 == '\0' && *s2 == '\0')
{
return (0);
}
else if (*s1 == '\0')
{
return (-15);
}
else
{
return (15);
}
}
