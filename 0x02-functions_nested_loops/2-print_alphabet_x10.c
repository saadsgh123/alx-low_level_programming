/**
* print_alphabet_x10 - Print the alphatbet 10 times in lowercase
* followed by a new line.
* 
* Return: Always void.
*/
#include "main.h"
void print_alphabet_x10(void)
{
int i;
char x;
for ( i=0 ; i < 10 ; i++ )
{
for ( x='a' ; x < 'z' ; x++ )
{
_putchar(x);
}
_putchar('\n');
}
_putchar('\n');
}
