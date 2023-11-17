#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - prints its name, followed by a new line.
* @argc: count of the arguments
* @argv: an array of pointers to the strings
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
