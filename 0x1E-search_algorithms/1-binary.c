#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary Search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = (int)size - 1;
	int m, i;

	if (!array)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i != R)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		m = L + (R - L) / 2;

		if (array[m] > value)
			R = m - 1;
		else if (array[m] < value)
			L = m + 1;
		else
			return (m);
	}

	return (-1);
}

