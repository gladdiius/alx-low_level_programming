/**
 *_islower - check if a number is upper caser or lower
 *
 *Return: value 0 if not lowercase and 1 if uppercase
 */
int _islower(int c)
{
	x=islower(c);
	if(x == 0)
	{
		return 0;
	}
	if(x == 2)
	{
		return 1;
	}
}
