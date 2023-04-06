#include "main.h"

/**
 * _puts_recursion - Mk Print a string, follows by a new line
 * description : print a string + followed by a new line, using 0/ spesifier
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
