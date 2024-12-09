#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE	1024

/**
 * exit_function - function to print error message and exit
 * @fd: File Descriptor
 * Return - Nothing
 */
void exit_function(int fd)
{
	int exFunc = close(fd);

	if (exFunc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copy content of one file to another
 * @argc: Arg Count
 * @argv: Arg Vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	int Read;
	int Write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd_from = open(argv[1], O_RDONLY);
	Read = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	do {
		if (fd_from == -1 || Read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		Write = write(fd_to, buffer, Read);
		if (fd_to == -1 || Write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		Read = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (Read > 0);
	free(buffer);
	exit_function(fd_from);
	exit_function(fd_to);
	return (0);
}
