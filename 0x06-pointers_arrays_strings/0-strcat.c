#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: string2 to overwrite and add to it
 *@src: is th first destination
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int c1;
	int c2;

	c1 = 0;

	while (dest[c1] != '\0')
	{
		c1++;
	}

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c1] = src[c2];
		c1++;
	}

	return (dest);

}
