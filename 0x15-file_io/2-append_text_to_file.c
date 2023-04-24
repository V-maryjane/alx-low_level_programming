#include "main.h"
#include <string.h>
/**
  *append_text_to_file - file name
  *@filename: pointer to the file
  *@text_content: NULL string
  *Return: If filename is NULL return -1, do not add anything to the file.
  */
int append_text_to_file(const char *filename, char *text_content)
{
int i, j;

	if (filename == NULL)
		return (-1);
	 i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	j = write(i, text_content, strlen(text_content));
	if (j == -1)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
