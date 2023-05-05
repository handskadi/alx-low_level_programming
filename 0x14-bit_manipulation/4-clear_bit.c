#include "main.h"

/**
 * clear_bit - n7to 9ima diyal bit tkon 0.
 * f ay inx ga3
 * @n: pointer l unsign integer ikon long
 * @index: idx diayl bit
 *
 * Return: 1 ila khdmat, -1 ila makhdmatch
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 63)
		return (-1);

	number = 1 << index;

	if (*n & number)
		*n ^= number;

	return (1);
}
