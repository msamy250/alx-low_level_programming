#include <stdio.h>

/*betty style doc for function main goes there */
/**
 *main - print prints the alphabet in lowercase.
 *Return: 0
 */
int main(void)
{
	char letter;
	char excludechar[] = { 'q', 'e' };

	int mumberexcluded = sizeof(excludechar) / sizeof(excludechar[0]);

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		int excluded = 0;

		for (int i = 0; i < mumberexcluded; i++)
		{

		if (letter == excludechar[i])
		{
			excluded = 1;
			break;
		}

		if (!excluded)
		{
			putchar(letter);
		}
	putchar('\n');
		}
	return (0);
}
