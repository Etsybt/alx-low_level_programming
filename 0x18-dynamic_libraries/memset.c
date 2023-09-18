#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: points to a memory area
 * @b: constant byte
 * @n: n bytes
 * Return: a pointer to the memory areas
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
