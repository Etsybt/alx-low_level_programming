#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 * or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
