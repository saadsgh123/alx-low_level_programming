#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
int res = 0;
if (argc <= 1)
{
printf("Error\n");
}

if (argc >= 2)
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}

return (0);
}
