#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
for (int i = 0; i <= 7; i++)
{
for (int j = 0; j <= 7; j++)
{
_putchar(a[i][j] + 0);
if (j == 7)
{
_putchar('\n');
}
}
}
}
