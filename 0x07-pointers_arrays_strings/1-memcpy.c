#include "main.h"
/**
  * _memcpy - function that copies memory area
  * @dest: destination of memory area
  * @src: source of memory area
  * @n: number of bytes
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
