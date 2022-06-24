#include <stdio.h>

/**
 * main - prints the number of argument passed into the function
 * @argc: number of arguments
 * @argv: array of arguments passed in
 *
 * Return: 0 to terminate the program
 */
int main(int argc, char *argv[])
{
	(void) **argv;

	printf("%d\n", argc);
	return (0);
}
