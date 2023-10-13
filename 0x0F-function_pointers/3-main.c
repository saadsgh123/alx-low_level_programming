#include "function_pointer.h"
#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b, result;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	c = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(c)(a, b);
	printf("%d\n", result);

	return (0);
}
