#include "main.h"

/**
 *string_nconcat - function that concatenates two strings
 *@s1: string
 *@s2: string 2
 *@n: bytes
 *Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	unsigned int l = 0;
	unsigned int lenth;
	char *concat;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (n >= j)
	{
		n = j;
	}

	lenth = n + i;

	concat = (char *) malloc((lenth + 1) * (sizeof(char)));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		concat[k] = s1[k];
	}

	for (l = 0; l < n; l++)
	{
		concat[k++] = s2[l];
	}

	concat[lenth] = '\0';

	return (concat);

}
