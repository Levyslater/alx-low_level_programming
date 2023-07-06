#include"main.h"
#include<stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - function checks if integer is prime
 *
 * @n: integer to check
 * Return: Integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check prime integer
 * @n: integer to be checked
 * @i: iteration
 * Return: 1 if prime 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
