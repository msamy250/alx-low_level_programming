#include "main.h"

/**
 *_strncat - function that concatenates two strings
 *@dest: string2 to overwrite and add to it
 *@src: is th first destination
 *@n: number of charachters
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1;
	int c2;

	c1 = 0;

	while (dest[c1] != '\0')
	{
		c1++;
	}

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
	{
		dest[c1 + c2] = src[c2];
		dest[c1 + c2] = '\0';
	}

	return (dest);

}
