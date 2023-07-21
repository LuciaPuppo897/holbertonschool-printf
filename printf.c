#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 *_printf - print f function
 *@format: format
 *Return: alway success
 */
int _printf(const char *format, ...)
{
va_list args;
	int i = 0;
	int	count = 0;
	int count2;

	va_start(args, format);
	if (format == 0 || (format[0] == '%' && format[0 + 1] == ' '))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		count2 = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				count = -1;
				break;
			}
			count2 += call_functions(format[i + 1], args);
			if (count2 == 0)
				count += _putchar(format[i + 1]);
			if (count2 == -1)
				count = -1;
			i++;
		}
		else
		{
		(count == -1) ? (_putchar(format[i])) : (count += _putchar(format[i]));
		}
	i++;
	if (count != -1)
	count += count2;
	}
	va_end(args);
	return (count);
}
