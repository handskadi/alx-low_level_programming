#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabet.
 * Return: 0
 */
int main(void)
{
        int long n = 0;
	char c = 'a';

        while (n < 10)
        {
		if (n >9)
		{
			while(c <= 'g')
			{
				putchar(c);
				c++;
			}
		} else
		{
			putchar(n + '0');
			n++;
		}
        }

        putchar('\n');

        return (0);
}
