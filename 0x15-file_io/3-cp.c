#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"

/**
 * main - main function
 * @argc: argument count
 * @argv: aragument vector
 * Return: 1 on success, -1 otherwise
 */

int main(int argc, char **argv)
{
	int fd, to_fd;
	ssize_t rbits;
	char buf;
	buf = malloc(sizeof(char) * READ_BUF_SIZE);

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	while ((rbits = read(fd, buf, READ_BUF_SIZE)) > 0)
		if (write(fd, buf, rbits) != rbits)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (rbits == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	fd = close(fd);
	to_fd = close(to_fd);
	if (fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
	return (EXIT_SUCCESS);
}
