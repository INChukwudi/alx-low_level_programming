#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it out to the
 *                 POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 *
 * Return: 0 if @filename == NULL
 *         0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t var_open, var_read, var_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	var_open = open(filename, O_RDONLY);
	var_read = read(var_open, buffer, letters);
	var_write = write(STDOUT_FILENO, buffer, var_read);

	if (var_open == -1 || var_read == -1 || var_write == -1 ||
		var_write != var_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(var_open);

	return (var_write);
}
