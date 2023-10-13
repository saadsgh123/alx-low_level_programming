#include "calc.h"
#include "function_pointer.h"
/**
 * get_op_func - Prints the result of simple operations.
 * @s: The number of arguments supplied to the program.
 * Return: Always 0.
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
			i++;
	}

	return (NULL);
}
