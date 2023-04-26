#include "main.h"
#include <stdio.h>

/**
 *print_binary -  prints the binary representation of a number.
 *@i: the number to print in binary.
 *
 *Return: Nothing
 */
void print_binary(unsigned long int i)
{

if (i > 1)
{
print_binary(i >> 1);

_putchar((i & 1) + '0');
return;
}
