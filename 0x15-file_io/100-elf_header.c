#include "main.h"
#include <elf.h>

/**
  */
void print_error(const char *E) {
	    fprintf(stderr, "Error: %s\n", E);
	        exit(98);
}
