#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of its parameters
 * @n: no of paramters
 * @...: variable number of parameters
 *
 * Return: 0 if no parameter passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);

		va_end(ap);
	}
	return (sum);
}
