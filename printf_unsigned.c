#include "main.h"

/**
 * printf_unsigned - fn to print unsinged number
 * @num: number of arguements
 * @count: the printed characters
 *
 * Return: {int} the new count
 */
int printf_unsigned(unsigned int num, int count)
{
	int d;
	unsigned int temp = num;

	d = 0;
	do {
		d++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (num != 0)
		{
			unsigned_str[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		for (i = d - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			count++;
		}
	}
	return (count);
}
