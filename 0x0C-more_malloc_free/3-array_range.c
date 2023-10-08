#include <stdlib.h>
#include "main.h"
/**
 * array_range - check the code
 * @min: min element.
 * @max: max element.
 * Return: Always new pointer.
 */
int *array_range(int min, int max)
{
int *ptr;
unsigned int i, num_element;

if (min > max)
return (NULL);

num_element = max - min + 1;

ptr = malloc((num_element + 0) * sizeof(int));

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;


return (ptr);
}
