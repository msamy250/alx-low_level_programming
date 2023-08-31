#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: is string
 *Return: 0
 */
void print_rev(char *s)
{
	int i;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
