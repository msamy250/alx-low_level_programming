#include "main.h"

/**
 *_strdup - duplicate string
 *@str: string 1
 *Return: pointer of  the duplicated string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *str2;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[length] != '\0')
		{
			length++;
		}
		str2 = (char *) malloc(length + 1);
		if (str2 == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < length; i++)
		{
			str2[i] = str[i];
		}

		str2[length] = '\0';

		if (i > length)
		{
			free(str2);
			return (NULL);
		}
		return (str2);
	}
}
