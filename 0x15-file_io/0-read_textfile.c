#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: the file's name
 * @letters: number of letters it should read and print
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
		  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, o;
	char *output;

	if (flename == NULL)
		return (0);

	output = malloc(letters);

	if (output == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(output);
		return (0);
	}
	r = read(f, output, letters);
	o = write(STDOUT_FILENO, output, r);
	close(f);

	return (o);
}
