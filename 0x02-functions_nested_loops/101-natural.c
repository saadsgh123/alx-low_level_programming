/**
 * main -  that prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Always void.
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void multiple()
{
int x;
int i=0;

for (x = 1023; x > 0; x--)
{
if (x % 3 == 0 || x % 5 == 0)
{
i += x;
}
}
printf("%d\n",i);
}

int main()
{
    multiple();
    return (0);
}
