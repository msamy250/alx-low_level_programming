#include "main.h"

/**
 *rev_string - prints a string in reverse
 *@s: is string
 *Return: 0
 */
void rev_string(char *s)
{
	int i;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	int start = 0;
	int end = l - 1;
	char c = s[start];

	while (start < end)
	{
		s[start] = s[end];
		s[end] = c;

		start++;
		end--;
	}
}
