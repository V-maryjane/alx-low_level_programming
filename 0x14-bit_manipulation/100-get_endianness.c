#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks endianness
 *
 * Return: if big endian-0 and if little endian - 1
 */

int get_endianness(void)
{
	int a = 1;

	if (*((char *)&a) == 1)
		return (1);

	        return (0);
}
