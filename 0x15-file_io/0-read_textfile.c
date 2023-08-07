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
	int output, read_file, write_file;
	char *buff;

	if (flename == NUL)
		return (0);

	output = open(filename, O_RDONLY);
	if (output == -1)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);

	read_file = read(output, buff, letters);
	write_file = write(STDOUT_FILENO, buff, read_file);

	if (write_file < 0)
		return (0);

	free(buff);
	close(output);

	return (read_file);
}
