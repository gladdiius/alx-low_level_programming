#include "search_algos.h"
/**
 * print_array - this function prints an array
 * @start: the start of the array
 * @end: the end of the array
 * @array: the array
 */
void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
		if (i != end)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	printf("\n");
}
/**
 * binary_search - search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the value if found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int mid, mid_element;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	print_array(array, low, high);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		mid_element = array[mid];
		printf("Searching in array: ");
		print_array(array, mid, high);
		if (mid_element == value)
		{
			return (mid);
		}
		else if (mid_element < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
