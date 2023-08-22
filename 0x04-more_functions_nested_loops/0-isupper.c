#include "main.h"

/**
 *_isupper - check the upper char.
 *@c: is charachter
 *Return: 0
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
