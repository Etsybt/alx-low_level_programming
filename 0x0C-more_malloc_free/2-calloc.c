#include "main.h"
/**
  * _memset - memory
  * @s: pointer
  * @j: constant
  * @n: bytes
  * Return: s
  */
char *_memset(char *s, char j, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = j;

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
	{
		return (NULL);
	}
	k = malloc(sizeof(int) * nmemb);

	if (k == 0)
	{
		return (NULL);
	}

	_memset(k, 0, sizeof(int) * nmemb);

	return (k);
}
