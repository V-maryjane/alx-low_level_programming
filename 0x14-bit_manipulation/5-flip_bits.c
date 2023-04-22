#include "main.h"
#include <stdio.h>

/**
 * flip_bits - number of bits
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int b = 0;
for (n != 0 || m != 0)

{
if ((n & 1)  != (m & 1))
b++;
n = n >> 1;
m = m >> 1;
	}
return (b);
}


}
