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
	ssize_t r;
	int output;
	char f[READ_BUF_SIZE * 8];

	if (flename == NULL || letters == NULL)
		return (0);
	output = open(filename, O_RDONLY);
	if (output == -1)
	{
		return (0);
	}
	r = read(output, &f[0], letters);
	r = write(STDOUT_FILENO, &f[0], r);
	close(output);

	return (r);
}
