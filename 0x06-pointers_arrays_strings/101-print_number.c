#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed.
 * Return: Always 0 (success)
 */
void print_number(int n)
{
unsigned int n1;

ni = n;
if (n < 0)
{
_putchar('_');
n1 = -n;
}
if ((n1 / 10 != 0)
{
print_number(n1 / 10);
}

_putchar((n1 % 10) + '0');
}
