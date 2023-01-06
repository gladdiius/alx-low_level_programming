#include <stdio.h>
/**
 * main - print name of args
 *@argc:int
 *@argv:char
 *Return: value 0
 */
int main(int argc, char *argv[])
{
	if (args < 3)
	{
		puts("error");
		return (1);
	}
	int x = argv[1] * argv[2];

	printf("%d", x);
	return (0);
}
