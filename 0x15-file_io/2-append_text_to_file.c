#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that moves cursor to the end of the file
 * @filename: path to the file to be appended
 * @text_content: text to append to the fie
 * Return: return 1 on success, -1 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written, len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (len)
	{
		close(fd);
		return (1);
	}
	written = write(fd, text_content, len);
	if (written < 0 || written != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
