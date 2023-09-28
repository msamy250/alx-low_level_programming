#include "main.h"

/**
 *puts_recursion - function that print string
 *@s: string
 *Return: 0
 */
void puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		puts_recursion(s + 1);
	}
}
