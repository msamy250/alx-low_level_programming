#include "main.h"

/*betty style doc for function main goes there */
/**
 *main - prints its name, followed by a new line.
 *Return: 0;
 */
int main(int argc, char* argv[])
{
    if (argc > 0)
    {
       printf("%s\n", argv[0]);
    }
    return (0);
}
