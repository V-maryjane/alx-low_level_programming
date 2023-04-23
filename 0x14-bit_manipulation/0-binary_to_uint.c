i#include "main.h"
#include <stdlib.h>
/**
  * binary_to_uint - Converts a binary number to an int.
  * @b: pointer to a string of 0 and 1 char
  *
  * Return: If b is NULL or contains chars not 0 or 1 - 0
  */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0, mask = 1;
int len;

while (*b == '\0')
return (0);

for (len = 0; b[len];)
len++;

for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
return (0);

num += (b[len] - '0') * mask;
mask *= 2;
}
return (num);

}
