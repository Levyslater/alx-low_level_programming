#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - function that reads files using system calls
 * @filename: path to the file being read
 * @letters: bits to be read
 * Return: returns bits read on success, -1 upon failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bits_read, bits_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bits_read = read(fd, buffer, letters);
	close(fd);
	if (bits_read == -1)
	{
		free(buffer);
		return (0);
	}
	bits_written = write(STDOUT_FILENO, buffer, bits_read);
	free(buffer);
	if (bits_written != bits_read)
		return (0);
	return (bits_written);
}
