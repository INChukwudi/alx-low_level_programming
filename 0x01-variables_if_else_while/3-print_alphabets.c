#include <stdio.h>

/**
 * main - function that prints out the lowercase and uppercase letters
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
