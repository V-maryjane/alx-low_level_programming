i#include "main.h"
#include <stdlib.h>
/**
  * binary_to_uint - Converts a binary number
  * @b: pointer to a string of 0 and 1 char
  *
  * Return: b is NULL or contains chars not 0 or 1 - 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int measure = 0;
	int z = 0;

	if (b == NULL)
		return (0);

	while (b[z])
	{
		if (b[z] == '0' || b[z] == '1')
		{
			measure <<= 1;
			measure += b[z] - '0';
			z++;
		}

			return (0);
	}
	return (measure);
}
