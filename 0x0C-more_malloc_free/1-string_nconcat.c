#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings, s1 followed by the first n
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0;
unsigned int total_len = 0, i;
char *concatenated;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[s1_len])
s1_len++;
while (s2[s2_len])
s2_len++;

if (n >= s2_len)
total_len = s1_len + s2_len;
else
total_len = s1_len + n;

concatenated = malloc(total_len + 1);

if (concatenated == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
concatenated[i] = s1[i];

for (i = 0; i < n && s2[i]; i++)
concatenated[s1_len + i] = s2[i];

concatenated[total_len] = '\0';

return (concatenated);
}
