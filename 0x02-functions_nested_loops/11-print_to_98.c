#include "main.h"

/**
 *void print_to_98( - return x up to 98
 *@x: number passed from main
 *Return: value int
 */
void print_to_98(int n)
{
	
	while(n <= 98)
	{
		_putchar((n % 10) + '0');
		if(n != 98)
		{
		_putchar(',');
		_putchar(' ');
		n++;
	}
	}
}
