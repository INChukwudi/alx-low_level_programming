#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of argumnts passed in
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, var_read, close_from, close_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((var_read = read(file_from, buffer, 1024)) > 0)
		if (file_to == -1 || (write(file_to, buffer, var_read) != var_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (var_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from == -1 || close_to == -1)
	{
		if (close_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		else if (close_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_to);
		exit(100);
	}
	return (0);
}
