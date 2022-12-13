#include "main.h"

/**
 *print_sign - check if a number is upper caser or lower
 *@n: number passed from main
 *Return: value 0 if not lowercase and 1 if uppercase
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{ 
		return (-1);
	}
}
