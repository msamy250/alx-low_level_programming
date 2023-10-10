#include "main.h"

/**
 *str_concat - concatenates strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int c1 = 0;
	int c2 = 0;
	int length;
	char *ptr;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[c1] != '\0')
	{
		c1++;
	}

	while (s2[c2] != '\0')
	{
		c2++;
	}

	length = c1 + c2;

	ptr = (char *) malloc(length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < c1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < c2; i++)
	{
		ptr[c1 + i] = s2[i];
	}

	ptr[length] = '\0';

	return (ptr);
}
