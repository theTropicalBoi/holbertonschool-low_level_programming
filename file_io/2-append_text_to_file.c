#include "main.h"
/**
 * append_text_to_file- function that appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t v_write;
	ssize_t len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;
		v_write = write(fd, text_content, len);
		if (v_write == -1 || v_write != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
