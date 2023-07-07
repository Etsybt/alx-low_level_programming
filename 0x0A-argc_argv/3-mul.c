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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argc[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
