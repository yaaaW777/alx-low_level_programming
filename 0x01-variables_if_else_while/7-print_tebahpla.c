#include <stdio.h>
/**
 * main - main block
 * Description: prints all sigle digit number of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (successful)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
