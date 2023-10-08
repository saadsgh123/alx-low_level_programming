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
memset(p, 0, nmemb * size);
return (p);
}
