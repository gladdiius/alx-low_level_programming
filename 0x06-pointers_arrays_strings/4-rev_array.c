#include "main.h"
/**
 *reverse_array - prints reversed string
 *@s: argument 1
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, *j, b;
	double middle = n / 2;
	int last, first, y;

	last = n - 1;
	y = 0;
	first = 0;
	middle = middle + 0.5;
	if (((double)middle / 2) != 0)
	{
		while (y < middle)
		{
			if (last >= (int)middle && first < (int)middle)
			{
				j = &a[first];
				b = a[first];
				p = &a[last];
				*j = a[last];
				*p = a;
				last--;
				first++;
			}
			y++;
		}
	}
	else
	{
		while (y <= middle)
		{
			j = &a[first];
			b = a[first];
			p = &a[last];
			*j = a[last];
			*p = a;
			last--;
			first++;
			y++;
		}
	}
}
