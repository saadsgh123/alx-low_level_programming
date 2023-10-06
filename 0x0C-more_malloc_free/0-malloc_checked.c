#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory.
 *
 * @b: size of memory.
 *
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
void *i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
