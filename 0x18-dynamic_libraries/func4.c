#include "main.h"
/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination
 * @src: source.
 * @n: length.
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;
    
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	return ((*s == c) ? s : NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string.
 * @accept: accept.
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: accept
 * Return: new string
 */
char *_strpbrk(char *s, char *accept) 
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return s;
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: sub string
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
