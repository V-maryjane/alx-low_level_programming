#include "main.h"

/**
*  _strcat - functions that concatenates two strings.
* @src: string to copy
* @dest: destination of string.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        while (desk[i]!='\0')
        {
        i++;
        }
        j = 0;
        while (src[j]!= '\0')
        {
        desk[i] = src[j];
        i++;
        j++;
        }
        dest[i] = '\0';
        return (dest);
}
