#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be created
 * @text_content: content of the file tobe created
 *
 * Return: 1 on success
 *         -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int var_open, var_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	var_open = open(filename, O_WRONLY | O_APPEND);
	var_write = write(var_open, text_content, len);

	if (var_open == -1 || var_write == -1)
		return (-1);

	close(var_open);
	return (1);
}
