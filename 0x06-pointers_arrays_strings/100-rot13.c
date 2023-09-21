#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
int i = 0;
int j;
char *source = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *target = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[i] != '\0')
{
j = 0;
while (j < 52)
{
if (s[i] == source[j])
{
s[i] = target[j];
break;
}
j++;
}
i++;
}
return (s);
}
