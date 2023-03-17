#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabet.
 * Return: 0
 */
int main(void)
{
	int long n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
