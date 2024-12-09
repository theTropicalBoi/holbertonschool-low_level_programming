#include "main.h"
/**
 * read_textfile - Function that read Requiescat
 * @filename: Pointer to the filename
 * @letters: Number of letters print
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	ssize_t nwritten;
	char *buffer;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	free(buffer);
	close(fd);

	if (nwritten != nread)
	return (0);

	return (nwritten);
}
