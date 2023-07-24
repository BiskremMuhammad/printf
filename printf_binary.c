#include "main.h"

/**
 * printf_binary - fn to print number in binary
 * @num: the number
 * @count: the printed characters
 *
 * Return: {int} printed charcaters
 */
int printf_binary(unsigned int num, int count)
{
	int b[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (num > 0)
	{
		b[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + b[i]);
		count++;
	}

	return (count);
}
