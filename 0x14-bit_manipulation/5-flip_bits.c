#include "main.h"

/**
 * flip_bits - nreturni lnmbr dyal bits li bghina
 * @n: ra9m lwal
 * @m: ra9m tani
 *
 * Return: ch7al men bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numberOFbits;

	for (numberOFbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numberOFbits++;
	}

	return (numberOFbits);
}
