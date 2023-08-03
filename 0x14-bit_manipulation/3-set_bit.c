#include "main.h"
/**
 *set_bit -  sets the value of a bit to 1 at a given index.
 *@n: pointer to integer
 *@index: position to be set
 *Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	if (*n)
		return (1);
	else
		return (-1);
}
