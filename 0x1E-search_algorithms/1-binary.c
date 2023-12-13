#include "search_algos.h"
/**
 * binary_search - search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the value if found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

