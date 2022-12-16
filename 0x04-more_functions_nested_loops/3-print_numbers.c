#include "main.h"
/**
 * print_numbers - print 1 to 9
 * Return: void
 */

void print_numbers(void)
{
	int array[] ={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

	while (i <= 9)
	{
		_putchar(i % 10 + '0');
		i++;
	}

	_putchar('\n');
}
