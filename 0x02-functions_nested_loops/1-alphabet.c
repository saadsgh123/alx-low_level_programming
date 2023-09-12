/**
 * print_alphabet - Print the alphabet in lowercase
 * followed by new line
 *
 * Return: Always void.
 */
#include "main.h"
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
