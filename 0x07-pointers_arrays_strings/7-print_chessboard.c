#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: 2d array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, k;
	char j;
	for(k = 0; k < 8; k++)
	{
		for(i = 0; i < 8; i++)
		{
			j = a[k][i];
			putchar(j);
		}
		_putchar('\n');
	}

}
