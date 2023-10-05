#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int _is_alpha(char c);
/**
 * main - Entry point.
 *
 * @argc: size of arguments
 * @argv: arguments array
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i, x, sum = 0;

if (argc == 2)
printf("%d\n", 0);

for (i = 1; i < argc; i++)
{
x = atoi(argv[i]);
if (argc > 2)
{
if (_is_alpha(argv[i][0]))
{
printf("Error\n");
return (1);
}
else
{
sum = sum + x;
}
}
}
if (sum > 0)
printf("%d\n", sum);
return (0);
}
/**
 * _is_alpha - function that check if it is an alphabet.
 *
 * @c: character to check
 *
 * Return: 0.
 */
int _is_alpha(char c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
