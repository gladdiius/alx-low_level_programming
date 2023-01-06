#include <stdio.h>
/**
 * main - print name of args
 *@argc:int
 *@argv:char
 *Return: value 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	}
	return (0);
}
