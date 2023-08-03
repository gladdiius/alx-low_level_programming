#include "main.h"
/**
 *countSetBits - counts bits
 *@n: integer
 *Return: count
 */
int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 *flip_bits - flip bits
 *@n: integer
 *@m: integer
 *Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
