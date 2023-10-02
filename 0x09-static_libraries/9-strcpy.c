#include "main.h"
/**
* _strcpy - prints every other character of a string
*
* @dest: list of character.
* @src: number of elements.
* Return: void (Success)
*/
char *_strcpy(char *dest, char *src)
{
char *dest_ptr = dest;

while (*src != '\0')
{
*dest_ptr = *src;
src++;
dest_ptr++;
}

*dest_ptr = '\0';

return (dest);
}
