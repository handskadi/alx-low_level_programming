#include "main.h"

/**
 * _print_rev_recursion - Mk Print a string revert, follows by a new line
 * description : print a string + followed by a new line, using 0/ spesifier
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
