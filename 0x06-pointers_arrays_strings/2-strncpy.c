#include "main.h"
/**
  * *_strncpy - copies a string
  * @dest: destination
  * @src: source
  * @n: integer
  * Return: void
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[j] != '\0')
	{
		dest[a] = src[a];
		a++
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
