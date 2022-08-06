#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 i* @f: function pointer to call back a function.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
