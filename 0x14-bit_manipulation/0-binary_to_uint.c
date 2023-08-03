#include "main.h"
/**
 *binary_to_uint - converts binary string to unsigned int
 *@b: string
 *Return: returns unsigned int on success and 0 on faliure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, base = 1, sum = 0;
	const char *string1 = b;

	if (b == NULL)
		return (0);

	while (*(string1++))
		count++;

	while (count)
	{
		count--;
		if (b[count] == '1')
			sum += base;

		if ((b[count] != '0') && (b[count] != '1'))
			return (0);
		base *= 2;
	}
	return (sum);
}
