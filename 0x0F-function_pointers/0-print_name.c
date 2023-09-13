#include "function_pointer.h"

/**
 * print_name - prints a name
 *
 * @name: string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if ( name && f)
		f(name);
}
