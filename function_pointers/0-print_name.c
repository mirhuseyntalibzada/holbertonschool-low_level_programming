#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char * and returns void
 *
 * Description: This function takes a string and a function pointer,
 * then calls the function pointed to by @f, passing @name as an argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
