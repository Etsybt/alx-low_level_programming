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



void print_abiv(char *h)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", h[8]);
}
