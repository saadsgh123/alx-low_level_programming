#include "main.h"
int check_polindrom(char *s, int start, int end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - check if the string is polindrom.
 * @s: the chararcters checked
 *
 * Return: 1 is true and 0 if false.
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s) - 1;

return check_polindrom(s, 0, len);
}
/**
 * check_polindrom - check the code
 * @start: index from 0
 * @end: index from string length.
 * Return: Always 0.
 */
int check_polindrom(char *s, int start, int end)
{
if (s[start] != s[end])
{
return (0);
}
if (start > end)
{
return (1);
}
if (s[start] == s[end] && start > end)
{
return (1);
}
return (check_polindrom(s,start + 1,end - 1));
}
/**
 * _strlen_recursion - check the code
 * @s:calcluate the string length.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
