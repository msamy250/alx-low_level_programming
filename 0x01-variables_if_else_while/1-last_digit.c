#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*betty style doc for function main goes there */
/**
 *main - print whether the number stored in the variable n
 *is positive or negative.
 *Return: Always The number, followed by string
 */
int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there */
	ln = n % 10;

	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ln);
	}
	else if (ln < 6 && ln != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ln);
	}

	return (0);
}
