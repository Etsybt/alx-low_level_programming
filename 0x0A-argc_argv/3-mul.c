#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - function
  * @argc: arg count
  * @argv: arg vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
