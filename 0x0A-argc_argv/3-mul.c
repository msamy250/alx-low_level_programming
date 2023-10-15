#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - multiplies two numbers.
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
