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
	int y;

for (y = (sizeof(unsigned long int) * 8) - 1; y >= 0; y--)
	{
if ((n >> y) & 1)
		{
			printf("1");
		}


			printf("0");
		}
}

