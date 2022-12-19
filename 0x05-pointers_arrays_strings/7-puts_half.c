#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0;

	while (8str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		-putchar(*str);
		str++;
	}

	_putchar('\n');
}
