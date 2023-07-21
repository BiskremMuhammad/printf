#include "main.h"

/**
 * printf_string - fn to print a string
 * @args: numberof arguements
 * @count: current count
 *
 * Return: {int} updated count with string length
 */
int printf_string(va_list args, int count)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
