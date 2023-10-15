#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - sum two numbers.
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *@i: number of count in argv array
 *@add: the sum
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	int add;
	int i;

	if (isdigit argv[i])
	{
		for (i = 1; i < argc; i++)

			add = 0;

		add = add + atoi(argv[i]);

		printf("%d\n", add);
	}
	else if (argc == 1)
	{
		printf("%i\n", 0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
