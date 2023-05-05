#include "main.h"

/**
 * get_endianness - n9almo had indians
 *
 * Return: 0 ila kan endian kbir, 1 ila kan endian sghir
 */
int get_endianness(void)
{
	unsigned int number;
	char *chr;

	number = 1;
	chr = (char *) &number;

	return ((int)*chr);
}
