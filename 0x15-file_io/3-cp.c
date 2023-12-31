#include "main.h"
/**
  * main - main func
  * @arc: argument count
  * @arv: argument vector
  *
  */
int main(int arc, char **arv)
{
	int output_from, output_to;
	int from_cp, to_cp;
	int close_1, close_2;
	char buff[1024];

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	output_from = open(arv[1], O_RDONLY);
	if (output_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		exit(98);
	}
	output_to = open(arv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (output_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99);
	}
	while ((from_cp = read(output_from, buff, 1024)) > 0)
	{
		to_cp = write(output_to, buff, from_cp);
		if (from_cp != to_cp)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
			exit(99);
		}
	}
	if (from_cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(98);
	}
	close_1 = close(output_from);

	if (close_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_from);
		exit(100);
	}
	close_2 = close(output_to);

	if (close_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_to);
		exit(100);
	}

	return (0);
}
