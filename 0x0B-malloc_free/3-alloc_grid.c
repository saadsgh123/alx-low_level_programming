#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 *
 * @width: the address of the two dimensional grid
 * @height: width of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **matrix;
int i, x, y;

if (width <= 0 || height <= 0)
return (NULL);


matrix = (int **)malloc(width * sizeof(int *));

for (i = 0; i < width; i++)
{
matrix[i] = (int *)malloc(height * sizeof(int));
}

for (x = 0; x < width; ++x)
{
for (y = 0; y < height; ++y)
{
matrix[x][y] = 0;
}
}
return (matrix);
}
