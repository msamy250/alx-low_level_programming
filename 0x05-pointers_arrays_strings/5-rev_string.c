#include "main.h"
#include <stdio.h>

/**
 *rev_string - prints a string in reverse
 *@s: is string
 *Return: 0
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, length;

	len = 0;
	length = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	length = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length];
		s[length--] = tmp;
	}
}
