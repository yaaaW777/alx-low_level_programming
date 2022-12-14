#include <stdio.h>

/**
 * numLenght - returns the lenght of string
 * @num : operand number
 * Return: number of digits
 */

int numLenght(int num)
{
	int lenght = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		lenght += 1;
	}

	return (lenght);
}
/**
 *  *main - prints the first 98 fibonaci sequences
 *  Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp , mx = 100000000,f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLenght(mx) - 1 - numLenght(f1);
		while (f1o < 0 && initial0s > 0);
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) %
