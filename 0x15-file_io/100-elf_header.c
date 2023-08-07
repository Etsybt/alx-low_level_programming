#include "main.h"
#include <elf.h>

/**
  */
void print_abiv(char *h)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", h[8]);
}
