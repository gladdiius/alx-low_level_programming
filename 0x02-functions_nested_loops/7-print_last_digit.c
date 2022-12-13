#include "main.h"

/**
 *print_last_digit - return the last digit of a number
 *@x: number passed from main
 *Return: value int
 */
int print_last_digit(int x)
{
	_putchar( ((x % 10) % 10) + '0'));
	return (x % 10);
}
