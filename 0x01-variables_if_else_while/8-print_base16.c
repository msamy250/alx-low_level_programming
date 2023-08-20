#include <stdio.h>

/*betty style doc for function main goes there */
/**
 *main - prints all the numbers of base 16 in
 *lowercase, followed by a new line.
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else if (num >= 10)
		{
			putchar((num - 10) + 'a');
		}
	}

	putchar('\n');

	return (0);
}

