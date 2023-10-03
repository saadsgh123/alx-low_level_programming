#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
int i, x = 0, sum = 0;

for (i = 1; i < argc; i++)
{
x = atoi(argv[i]);
if (argc > 2)
{
if (isalpha(argv[i][0]))
{
printf("Error\n");
return (1);
}
else
{
sum = sum + x;
}
}
else
{
printf("%d\n", 0);
}
}
printf("%d\n", sum);
return (0);
}
