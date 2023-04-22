#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0
 * @n: number to modify
 * @index: index of the bit.
 *
 * Return:int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

num = 1ul << index;
*n &= ~num;

return (1);
}
