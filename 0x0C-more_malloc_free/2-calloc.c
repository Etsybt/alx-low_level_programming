#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _memset - memory
  * @s: pointer
  * @l: constant
  * @n: bytes
  * Return: s
  */
char *_memset(char *s, char l, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = l;
	return (ptr);
}
/**
  * _calloc - allocates memory for an array
  * @nmemb: elements of an array
  * @size: size of the array
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *k;

	if (size == 0 || nmemb == 0)
		return (NULL);
	k = malloc(sizeof(int) * nmemb);

	if (k == 0)
		return (NULL);

	_memset(k, 0, sizeof(int) * nmemb);

	return (k);
}
