#include <stdio.h>

/**
 * main - prints the name of the file of the program was compiled from
 *
 * Return: 0 to terminate the program
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
