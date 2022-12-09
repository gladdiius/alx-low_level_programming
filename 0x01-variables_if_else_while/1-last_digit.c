#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - get the last number and tells if the number is 0 ,greater than 5
 *or is bettween 0 and 5
 *
 * Return: value 0
 *
 **/

int main(void)

{
	int n, n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;
	if (n1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n1);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n1);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is a 0\n", n, n1);
	}
return (0);
}
