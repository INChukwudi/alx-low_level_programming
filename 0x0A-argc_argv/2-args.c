#include <std.io.h>

/**
 * main - prints all arguments the function receives
 * @argc: number of arguments received
 * @argv: deferenced array of arguments
 *
 * Return: 0 to terminate program
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", **argv + i);

	return (0);
}
