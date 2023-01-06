#include <stdio.h>
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
		puts("error");
		return (1);
	}
	int x = argv[1] * argv[2];

	printf("%d", x);
	return (0);
}
