#include "main.h"
/**
* rev_string - function that prints a string in reverse.
*
* @s: list of character.
*
* Return: void (Success)
*/
void rev_string(char *s)
{
int len = _strlen(s);
int start = 0;
int end = len - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
/**
* _strlen - function that prints a string in reverse.
* @s: list of character.
* Return: length (Success)
*/
int _strlen(char *s)
{
int i;
int len = 0;
for (i = 0;; ++i)
{
if (*(s + i) == '\0')
{
break;
}
len++;
}
return (len);
}
