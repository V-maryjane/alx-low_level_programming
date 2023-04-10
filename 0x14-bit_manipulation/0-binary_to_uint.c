#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return Null
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;
int len;

if (b == NULL)
return (0);

len = strlen(b);

for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);

result = result << 1;
if (b[i] == '1')
result (+= 1);
}
return (result);
}
