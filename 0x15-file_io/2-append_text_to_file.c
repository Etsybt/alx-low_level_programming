#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: file name
  * @text_content: content
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int output, print;
	int length = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	output = open(filename, O_WRONLY | O_APPEND);

	if (output == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[length];)
			length++;
		print = write(output, text_content, length);
		if (print == -1)
			return (-1);
	}
	close(output);
	return (1);
}
