#include "main.h"

/**
 * get_bit - get bit index
 * @n: The number whose bit value is to be returned
 * @index: index of the bit
 *
 * Return: value of the bit at the given index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
while (index >= (sizeof(unsigned long int) * 8))
return (-1);

return ((n >> index) & 1);
}
