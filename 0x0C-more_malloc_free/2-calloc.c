/**
 * _calloc - check the code
 * @nmemb: number of elements
 * @size: size of each element.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

void *p;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(10 * size);

if (p == NULL)
return (NULL);
_memset(p, 0, nmemb * size);
return (p);
}
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
