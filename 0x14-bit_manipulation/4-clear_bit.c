#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index.
 *@n: pointer to integer
 *@index: position to be cleared
 *Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & (~(1 << index));
	if (*n)
		return (1);
	else
		return (-1);
}
