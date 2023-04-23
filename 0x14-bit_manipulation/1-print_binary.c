#include "main.h"
#include <stdio.h>

/**
 *print_binary: prints the binary representation of a number.
 *@n: the number to print in binary.
 *
 *Return: Nothing
 */

void print_binary(unsigned long int n)
{
while (n > 1)

print_binary(n >> 1);

_putchar((n & 1) + '0');
}

