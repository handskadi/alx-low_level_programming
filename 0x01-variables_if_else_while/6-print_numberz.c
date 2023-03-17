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
		char n = n;
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
