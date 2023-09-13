/**
 * multiple -  that prints all natural numbers from n to 98
 * main - print the multiple below 1024
 * followed by a new line.
 * Return: Always void.
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void multiple(void)
{
int x;
int i = 0;

for (x = 1023; x > 0; x--)
{
if (x % 3 == 0 || x % 5 == 0)
{
i += x;
}
}
printf("%d\n", i);
}
/**
 * main - print the multiple below 1024
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
multiple();
return (0);
}
