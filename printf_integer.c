#include "main.h"

/**
 * printf_integer - fn to print numbers
 * @args: args list
 * @count: the printed characters
 *
 * Return: {int} printed charcaters
 */

int printf_integer(va_list args, int count)
{
	int num = va_arg(args, int);
	int i, d;
	int temp = num;

	i = 0;
	if (num < 0)
	{
		count += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		i++;
		temp /= 10;
	} while (temp != 0);

	while (i > 0)
	{
		int pow10 = 1;
		int x;

		for (x = 1; x < i; x++)
		{
			pow10 *= 10;
		}
		d = num / pow10;
		count += _putchar(d + '0');
		num -= d * pow10;
		i--;
	}
	return (count);
}
