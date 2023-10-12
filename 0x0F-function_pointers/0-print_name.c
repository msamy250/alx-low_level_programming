#include "function_pointers.h"

/**
 *print_name - print name
 *@f: function pointer
 *@name: name
 *Return: name
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
