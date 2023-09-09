#include "main.h"

/**
 *_strncpy - function that concatenates two strings
 *@dest: string2 to overwrite and add to it
 *@src: is th first destination
 *@n: number of charachters
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
