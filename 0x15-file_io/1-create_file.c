#include "main.h"
#include <string.h>
/**
  *create_file - create a file
  *@filename: pointer to a file
  *@text_content: character to put in a file
  *Return: for success 1, for failure - 1
  */
int create_file(const char *filename, char *text_content)
{
	int o, z;

	if (filename == NULL)
		return (-1);
	while (text_content == NULL)
		text_content = "";
	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	z = write(x, text_content, strlen(text_content));
	if (z == -1)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
