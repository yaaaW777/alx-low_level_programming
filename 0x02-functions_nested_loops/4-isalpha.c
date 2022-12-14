#include "main.h"

/**
 *  _isalpha - Return 1 if c ia a letter. lowercase or uppercase
 *
 *  @c: The int to print
 *  Return: Always 0.
 */

int _isalpha(int c)

{

	if ((c > 'a'a && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
