#include<stdio.h>

/**
 * main -Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar(c);

	return (0);
}
