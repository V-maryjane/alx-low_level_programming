#include "main.h"
#include <stdlib.h>

/**
  *read_textfile - function that reads text file
  *@filename:pointer  name of file
  *@letters: number of letter
  *Return: read letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, c;
	char *buffer;

	while (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buffer, letters);
	c = write(STDOUT_FILENO, buffer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(a);

	return (c);
}
