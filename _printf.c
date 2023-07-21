#include "main.h"

/**
 * _printf - fn to print whatever passed to it
 * @format: the format
 * @...: var arguments
 *
 * Return: {int} number of printed characters
 */

int _printf(const char *format, ...)
{
	int i;
	va_list a;

	va_start(a, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i = specifier(format, a, i);
			format++;
		}
		else
		{
			_putchar(*format);
			i++;
			format++;
		}
	}
	va_end(a);
	return (i);
}
