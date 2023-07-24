#include "main.h"

/**
 * printf_octal - fn to print number in octal
 * @num: number of arguements
 * @count: the printed characters
 *
 * Return: {int} the new count
 */

int printf_octal(unsigned int num, int count)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[i] = 48 + remainder;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			count++;
		}
	}
	return (count);
}
