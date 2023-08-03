#include "main.h"
/**
 * get_bit- returns the value of a bit at a given index.
 * @n: integer value
 * @index: the value of bit at position to be returned
 * Return: the value of the bit at index index or -1
 *if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((int)n < 0 || (int)index < 0)
		return (0);
	else	
		return ((n & (1 << index)) ? 1 : 0);
}
