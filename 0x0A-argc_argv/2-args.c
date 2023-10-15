#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - the number of arguments passed into it.
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *@i: number of loops
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)

			printf("%s\n", argv[i]);
	}

	return (0);
}
