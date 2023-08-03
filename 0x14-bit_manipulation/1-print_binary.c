#include "main.h"
/**
 *print_binary - prints a binary value of a given number
 *@n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i = 11, set = 0;
	unsigned long int mask;

	while (i >= 0)
	{
		mask = n >> i;
		if (mask & 1)
		{
			_putchar('1');
			set = 1;
		}
		else if (set)
			_putchar('0');
		i--;
	}
	if (n == 0)
		_putchar('0');
}