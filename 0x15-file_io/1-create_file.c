#include "main.h"
/**
  * create_file - a function that creates a file.
  * @filename: the file's name
  * @text_content: a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int output;
	ssize_t byte;

	if (!filename)
		return (-1);

	output = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (output == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		byte = write(output, text_content, strlen(text_content));
		if (byte == -1)
		{
			close(output);
			return (-1);
		}
	}
	close(output);
	return (1);
}
