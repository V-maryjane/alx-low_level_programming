#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: pointer to the number.
 * @index: index of the bit to set.
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
while (index >= (sizeof(unsigned long int) * 8))

return (-1);
*n ^= (1 << index);
return (1);
}
