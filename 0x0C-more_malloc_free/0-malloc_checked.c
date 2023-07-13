#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked -  allocates memory
  * @b: integer
  * Return: ptr to the allocated memory
  * return 98 if failed
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
