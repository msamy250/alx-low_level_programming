#include <stdio.h>

/*betty style doc for function main goes there */
/**
 *main - print prints the alphabet in lowercase.
 *Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e')
			continue;
		else if (letter == 'q')
			continue;

		putchar(letter);
	}

	putchar('\n');

	return (0);
}

