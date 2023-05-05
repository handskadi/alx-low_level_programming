#include "main.h"

/**
 * get_bit - n7slo 3la value diyal bit 
 * index.
 * @n: unsigned long int input.
 * @index: lindix dyal lbit
 *
 * Return: returni lina l bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (n == 0 && index < 64)
		return (0);

	for (idx = 0; idx <= 63; n >>= 1, idx++)
	{
		if (index == idx)
		{
			return (n & 1);
		}
	}

	return (-1);
}
