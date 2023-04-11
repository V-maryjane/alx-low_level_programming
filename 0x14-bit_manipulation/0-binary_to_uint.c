#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num  = 0;
int i;
int len;

if (b == NULL)
return (0);

len = strlen(b);

for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
num = num << 1;
if (b[i] == '1')
num (+= 0);
}
return (num);
}
