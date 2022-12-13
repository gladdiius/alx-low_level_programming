#include "main.h"

/**
 *print_last_digit - return the last digit of a number
 *@x: number passed from main
 *Return: value int
 */
int print_last_digit(int x)
{
	int y;

	y = abs(x);
	
	_putchar((y + '0'));
	return (y % 10);
}
