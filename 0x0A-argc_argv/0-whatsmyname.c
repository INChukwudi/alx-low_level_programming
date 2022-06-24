#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 to terminate program
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
