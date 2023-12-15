#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	char *copy = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (copy);
}

/**
 * _strncat - concatenates n characters from one string to another
 * @dest: destination.
 * @src: source.
 * @n: length
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *copy = dest;
	while (*dest)
		dest++;
	while (n-- > 0 && (*dest++ = *src++))
		;
	*dest = '\0';
	return (copy);
}

/**
 * _strncpy - copies up to n characters from one string to another
 * @dest: destination
 * @src: source.
 * @n: length.
 * Return: new string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;
	while (n-- > 0 && (*dest++ = *src++))
		;
	while (n-- > 0)
		*dest++ = '\0';
	return (copy);
}

/**
 * _strcmp - compares two strings
 * @s1: first
 * @s2: second.
 * Return: length
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _memset - fills memory with a constant byte
 * @s: ded
 * @b: dede
 * @n: dede
 * Return: new
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
