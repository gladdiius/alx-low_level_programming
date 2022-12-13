#include "main.h"

/**
 *print_last_digit - return the last digit of a number
 *@x: number passed from main
 *Return: value int
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
		y *= -1;
	_putchar((y + '0'));
	return (0);
}
