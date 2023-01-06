#include <stdio.h>
/**
 * main - print number of args
 *@argc:int
 *@argv:char
 *Return: value 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
