#include "3-calc.h"

/**
  * main - main func
  * @argc: number of the parameters
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char **argv)
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", p(a, b));
	return (0);
}
