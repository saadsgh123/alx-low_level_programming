/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: fun pointer.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{

	if (f == NULL || name == NULL)
		return;

	f(name);
}
