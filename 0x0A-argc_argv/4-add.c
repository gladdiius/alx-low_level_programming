#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiply two args
 *@argc:int
 *@argv:char
 *Return: value 0 or 1 if argc < 3
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return 0;
	}
	for (x = 0; x < argc; x++)
	{
		z = atoi(argv[i]);
		y = isdigit(z);
		if (y == 0)
		{
			printf("Error\n");
			return 1;
		}
		else
		{
			sum += z;
		}

	}
	printf("%d", sum);
	return 0;
}
