#include "main.h"
/**
 *rev_string - prints reversed string
 *@s: argument 1
 *Return: void
 */
void rev_string(char *s)
{
	char *p, *j, b;
	double x = strlen(s); 
	double middle = x / 2;
	middle = ceil(middle);
	int last = x -1 , first = 0, y = 0;

	if (((double)middle/2 )!= 0)
	{
		while(y < middle)
		{
			if (last >= (int)middle && first < (int)middle)
			{
				j = &s[first];b = s[first];
				p = &s[last];
				*j = s[last];
				*p = b;last--;
				first++;
			}
			y++;
		}
	}
	else
	{
		while(y <= middle)
		{
			j = &s[first];
			b = s[first];
			p = &s[last];
			*j = s[last];
			*p = b;last--;
			first++;y++;
		}
	}
}
