#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - the number of arguments passed into it.
* @argc: count of the arguments
* @argv: an array of pointers to the strings
 *Return: 0;
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
