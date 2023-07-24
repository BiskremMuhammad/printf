#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int specifier(const char *format, va_list args, int count);
int printf_string(va_list args, int count);
int printf_integer(va_list args, int count);
int printf_binary(unsigned int num, int count);
int printf_unsigned(unsigned int num, int count);
int printf_octal(unsigned int num, int count);
int _hex(unsigned int num, int count, int uppercase);
#endif
