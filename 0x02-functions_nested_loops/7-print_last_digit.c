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
	_putchar( (y % 10) + '0');
	return (x % 10);
}
