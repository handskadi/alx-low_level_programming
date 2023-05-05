#include "main.h"

/**
 * set_bit - rje3 9ima diyal l bit l 1.
 * f adx ga3 li 3tinah
 * @n: pointer diyall lng  unsg intgr
 * @index: idx dyal l bit
 *
 * Return: 1 c'est camarch, -1c'est 404 haha.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 63)
		return (-1);

	number = 1 << index;
	*n = (*n | number);

	return (1);
}
