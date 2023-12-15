#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char
 * Return: n
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _puts - writes a string to stdout
 * @s: string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 *  _strcpy - copies a string to another
 * @dest: destination
 * @src: source.
 * Return: new string
 */
char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while ((*dest++ = *src++))
		;
	return (copy);
}

/**
 * _atoi - converts a string to an integer
 * @s: string.
 * Return: number
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s++ == '-') ? -1 : 1;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
