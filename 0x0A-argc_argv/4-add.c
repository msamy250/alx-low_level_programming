#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - sum two numbers.
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i;
	int z;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (z = 0; argv[i][z] != '\0'; z++)

				if (!isdigit(argv[i][z]))
				{
					printf("Error\n");
					return (1);
				}

			add = add + atoi(argv[i]);
		}

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
