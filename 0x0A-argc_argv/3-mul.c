#include <stdio.h>
#include <stdlib.h>
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
int res;
if (argc <= 1)
{
printf("Error\n");
return (1);
}

if (argc >= 2)
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}

return (0);
}
