#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two args
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int q1 = 0, q2 = 0;

	if (argc == 3)
	{
		q1 = atoi(argv[1]);
		q2 = atoi(argv[2]);
		printf("%d\n", q1 * q2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
