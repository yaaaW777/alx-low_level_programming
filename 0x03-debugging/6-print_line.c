#include "main.h"
/**
 * print_line - printing lines
 * @n: number oftimes
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
