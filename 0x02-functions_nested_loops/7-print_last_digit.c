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

	y = y % 10;
	_putchar((y % 10) + '0');
	return (y);
}
