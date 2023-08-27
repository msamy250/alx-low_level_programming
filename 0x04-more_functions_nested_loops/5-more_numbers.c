#include "main.h"

/**
 *more_numbers - print numbers
 *@i: numbers
 *@c: count the rows
 */
void more_numbers(void)
{
	int i;
	int c;

	for (c = 1; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
	_putchar('\n');
	}
}

