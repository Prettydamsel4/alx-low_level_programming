#include <stdio.h>

/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	putchar('\n');

	return (0);
}
