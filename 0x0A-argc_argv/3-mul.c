#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two args
 *@argc:int
 *@argv:char
 *Return: value 0 or 1 if argc < 3
 */
int main(int argc, char *argv[])
{
	int x, y;
 	if (argc == 3)
	{
	y = atoi(argv[1]);
	x = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
	}
	printf("Error\n");
	return (1);
}
