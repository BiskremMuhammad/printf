#include "main.h"

/**
 * specifier - fn to retreive corresponding specifier
 * @format: print format
 * @args: print args
 * @count: current count
 *
 * Return: {int} next count
 */
int specifier(const char *format, va_list args, int count)
{
	switch (*format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			count++;
			break;
		case 's':
			count = printf_string(args, count);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			break;
	}
	return (count);
}
