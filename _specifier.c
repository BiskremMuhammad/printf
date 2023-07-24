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
		case 'S':
			count = printf_string(args, count);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		case 'd':
		case 'i':
			count = printf_integer(args, count);
			break;
		case 'b':
			count = printf_binary(va_arg(args, unsigned int), count);
			break;
		case 'u':
			count = printf_unsigned(va_arg(args, unsigned int), count);
			break;
		case 'o':
			count = printf_octal(va_arg(args, unsigned int), count);
			break;
		case 'x':
		case 'X':
			count = _hex(va_arg(args, unsigned int), count, (*format == 'X') ? 1 : 0);
			break;
		default:
			break;
	}
	return (count);
}
