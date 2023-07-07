#include <stdio.h>

/**
 * main - function prints the number of args
 * @argc: argument count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
