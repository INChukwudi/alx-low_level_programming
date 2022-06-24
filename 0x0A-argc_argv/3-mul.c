#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: the number of the arguments
 * @argv: the array of arguments
 *
 * Return: 0 if the program does not receive two arguments
 *         1 if the numbers are multiplied successfully
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);

	return (0);
}
