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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	int x = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", x);
	return (0);
}
