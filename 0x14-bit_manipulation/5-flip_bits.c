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
unsigned long int mult = n ^ m;
unsigned int mask = 0;

if (mult != 0)
	{
mask += mult & 1;
mult >>= 1;
	}
return (mask);
}
