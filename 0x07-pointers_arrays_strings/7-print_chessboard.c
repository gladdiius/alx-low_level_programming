#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: 2d array
 * Return: void
 */
void print_chessboard(char (*a)[8]);
{
	int i;
	char j;
	for(i = 0; i < 8; i++)
	{
		j = a[1][i];
		_putchar(j);	
	}
	_putchar('\n');
	for(i = 0; i < 8; i++)
	{
		j = a[7][i];
		_putchar(j);
	}
}
