#include "main.h"

/**
 *print_diagonal - draws a straight line
 *@n: the number of times charchter will print
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (s = 0; s <= i; s++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

