#include "main.h"
/**
 * rev_string - function that reverse a string.
 * @s: input string
 */
void rev_string(char *s)
{
	char str[32] = "";
	int idx = 0;

	while (s[idx])
	{
		str[idx] = s[idx];
		idx++;
	}

	while (idx > -1)
	{
		*s = str[idx - 1];
		s++;
		idx--;
	}
}
