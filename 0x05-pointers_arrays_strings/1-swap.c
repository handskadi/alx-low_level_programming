#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * swaps the value it pointers.
 * @a: pointer to the variable to update
 * @b: another pointer to the variable to update
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
