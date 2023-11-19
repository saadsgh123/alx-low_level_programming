#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: the string to count.
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
