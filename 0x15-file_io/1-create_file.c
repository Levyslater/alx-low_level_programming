#include"main.h"

/**
 * create_file - function that creates a file using create function call
 * @filename: The name of the file to be created
 * @text_content: Null terminater to ascend at the end of the string
 * Return: return 1 on success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, index = 0;
	ssize_t pos;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[index])
			index++;
		pos = write(fd, text_content, index);
	}
	if (pos < -1)
		return (-1);
	close(fd);
	return (1);
}
