#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - gets the arguments and processes the results
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 to terminate the program
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
