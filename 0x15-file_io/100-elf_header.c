#include "main.h"
#include <elf.h>

/**
  * elf_check - checks if the file is an ELF file
  * @w: elf header
  * Return: void
 */
void elf_check(char *w)
{
	if(w[0] != 0x7f || w[1] != 'E' || w[2] != 'L' || w[3] != 'F')
	{
		dprintf(STDERR_FILENO, "ERROR\nthis file is not an ELF file");
		exit(98);
	}
}

/**
  * print_Magic - displays elf magic
  * @w: header
  * Return: void
  */
void print_Magic(char *w)
{
	int ind = 0;
	unsigned int f;

	printf("ELF Header:\n  ");
	printf("Magic:   ");

	f = (unsigned int)w[ind];

	while (ind < 15)
	{
		ind++;
		printf("%02x ", f);
	}
	printf("%02x", f);

	printf("\n");
}

/**
  * print_Class - displays elf class
  * @w: header
  * @64bit_objects: gives 1 as value if it's an ELFCLASS32
  * or 2 if it's an ELFCLASS64
  * Return: void
  */
void print_Class(char *w, int 64bit_objects)
{
	if (w[4] != 1 && w[4] != 2)
	{
		printf("Invalid class\n");
		return;
	}
	printf("Class:                             ");
	if (64bit_objects == 0)
		printf("ELF32\n");
	if (64bit_objects = 1)
		printf("ELF64\n");
}

/**
  * print_Data - displays elf data
  * @w: header
  * Return: void
  */
void print_Data(char *w)
{
	printf("Data:                              2's complement, little endian");
	if (w[5] == 1)
		printf("ELFDATA2LSB\n");
	if (w[5] == 2)
		printf("ELFDATA2MSB\n");
	else
		printf("Invalid data encoding");

}

int main(int arc, char **arv)
{
	int output_elf, read_elf, c_elf, 64bit_objects = 0;
	char w[16];

	if (arc != 2)
	{
		dprintf(STDERR_FILENO, "argument number is not valid\n");
		exit(98);
	}
	if (arv[1] == 0)
	{
		dprintf(STDERR_FILENO, "Enter a name\n");
		exit(98);
	}

	output_elf = open(arv[1], O_RDONLY);
	if (output_elf == -1)
	{
		dprintf(STDERR_FILENO, "file not able to open\n");
		exit(98);
	}

	read_elf = read(fd_elf, w, 32);
	if (read_elf == -1)
	{
		dprintf(STDERR_FILENO, "ERROR\n");
		exit(98);
	}
	elf_check(w);
	if (w[4] == 2)
		64bit_objects = 1;
	print_Magic(w);
	print_Class(w, 64bit_objects);
	print_Data(w);
	print_version(w);

	c_elf = close(output_elf);
	if (c_elf == -1)
	{
		dprintf(STDERR_FILENO, "ERROR\n");
		exit(98);
	}
	return (0);
}







