#ifndef MAIN_H
#define MAIN_H

/**
 *
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0C. C - More malloc,free directory.
 */


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
