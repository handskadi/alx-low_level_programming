#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabet.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c <='q' || c <= 'e')
		{

		} else {
			putchar(c);
			c++;
		}
	}

	putchar('\n');

	return (0);
}
