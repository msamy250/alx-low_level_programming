#include "main.h"

/**
 *_strcmp - function that concatenates two strings
 *@s1: string2 to overwrite and add to it
 *@s2: is th first destination
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int) *s1 - 48) - ((int) *s2 - 48);
			break;
		}

		s1++;
		s2++;
	}

	return (equal);
}
