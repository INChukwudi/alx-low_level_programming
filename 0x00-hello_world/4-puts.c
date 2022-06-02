#include <stdio.h>
#include <string.h>

/**
 * main - this function creates and string and prints it out
 *
 * Return: 0 ti indicate the end of the function
 */
int main(void)
{
	char str1[52];
	
	strcpy(str1, "\"Programming is like building a multilingual puzzle");
	puts(str1);
	return(0);
}
