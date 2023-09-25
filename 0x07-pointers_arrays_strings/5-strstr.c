#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*p == '\0')
return (haystack);

haystack++;
}
return (0);
}
