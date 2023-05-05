#include "main.h"

/**
 * binary_to_uint - converta l binary l ra9m
 * unsigned int.
 * @b: binary
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int usit;
	int l, base_two;

	if (!b)
		return (0);

	usit = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, base_two = 1; l >= 0; l--, base_two *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			usit += base_two;
		}
	}

	return (usit);
}
