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

ptr = malloc(max * sizeof(int));

if (ptr == NULL)
return (NULL);

for (i = 0; i <= max; i++)
{
ptr[i] = i;
}

return (ptr);
}
