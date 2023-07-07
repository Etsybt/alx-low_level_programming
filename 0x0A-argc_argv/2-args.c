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
	for (int i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
