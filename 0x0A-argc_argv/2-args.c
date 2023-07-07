#include "main.h"
#include <stdio.h>
/**
  * main - function
  * @argc: arg count
  * @argv: arg vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n > argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
