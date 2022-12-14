#include "main.h"

/**
 *print_last_digit - return table of numbers
 *@x: number passed from main
 *Return: value void
 */
void times_table(void)
{
	int table;
	int e[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j;
	for (j = 0; j <= 9; j++)
	{
	for (i = 0; i <= 9; i++)
	{
	table = e[j] * e[i];
	if(table < 10)
	{
	_putchar((table % 10) + '0');
	}
	else
	{
		_putchar((table / 10) + '0');
		_putchar((table % 10) + '0'); 
	}

	if(i != 9 && table < 10 < table * 2)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	 
	}
	else if (i != 9 && (table % 10 != table))
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
	}
}
}

