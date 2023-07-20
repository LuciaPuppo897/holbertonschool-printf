#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_s - print a string
 * @list: the string that printf recieve
 * Return: nothing
 */
void print_s(va_list list)
{
	int i;
	char *str;

	str = (va_arg(list, char *));

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}

/**
 * print_c - prints a char
 *@list: the arguments that printf recieve
 *Return: nothing
 */

void print_c(va_list list)
{
	char c;

	c = (va_arg(list, int));
	putchar(c);
}
/**
 * print_percent - prints a % symbol
 *Return: nothing
 *
 */

void print_percent(void)
{
	putchar('%');
}
