#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character.
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for a lowercase character
 * @c: character.
 * Return: c
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks for an alphabetic character
 * @c: character.
 * Return: c
 */
int _isalpha(int c)
{
	return (_islower(c) || _isupper(c));
}

/**
 * _isupper - checks for an uppercase character
 * @c: character.
 * Return: c
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _abs - computes the absolute value of an integer
 * @n: number
 * Return: n
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
