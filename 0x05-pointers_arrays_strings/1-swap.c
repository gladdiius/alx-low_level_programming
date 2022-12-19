/**
 *swap_int - swap the value of two variables
 *@a:int
 *@b:int
 *Return: value void
 */

void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}

