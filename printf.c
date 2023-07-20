#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 *_printf - print f function
 *@format: format
 *Return: alway success
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
		switch (*format)
		{
			case 'c':
				print_c(args);
				count++;
				break;

			case 's':
				print_s(args);
				count++;
				break;

			case '%':
				_putchar('%');
				count++;
				break;

			case 'd':
			case 'i':
				print_d(args);
				count++;
				break;

			default:
				_putchar(*format);
				count += 2;
				break;
			}
		}
			_putchar(*format);
		}
		va_end(args);
		return (count);
}

