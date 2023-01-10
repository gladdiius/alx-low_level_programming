/**
 *
 *create_array -creats an arrray
 *@size: unsigned int
 *@c: character
 *Return: char
 *
 */
char *create_array(unsigned int size, char c)
{
	ar = malloc(size * sizeof(c));
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return ar;
}
