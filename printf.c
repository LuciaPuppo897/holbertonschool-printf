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
	va_list args;

	va_start(args, format);

	int i = 0; // To keep track of the number of characters printed

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			_putchar(*format); // prints string
			i++;
			continue; // checks the rest of the code
		}

		format++; // Move to the next character after '%'

		switch (*format)
		{
			case 'c':
			{
				print_c(args); // calls print_c function
				break; // stops after implementation
			}

			case 's':
			{
				print_s(args); //calls print_s function
				break;
			}

			case '%':
			{
				print_percent();
				break;
			}

			default:
				_putchar('%');
				_putchar(*format);
				i += 2;
				break;
		}
	}

	va_end(args);

	return (i);
}

