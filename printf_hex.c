#include "main.h"

/**
 * _hex - fn to print number in hex
 * @num: number arguements
 * @count: the printed characters
 * @uppercase: the uppercase equivalent
 *
 * Return: {int} new count
 */

int _hex(unsigned int num, int count, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
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
			_putchar(hex[j]);
			count++;
		}
	}
	return (count);
}
