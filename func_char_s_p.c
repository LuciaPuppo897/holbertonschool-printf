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
	int i; // recorre//
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

void print_c(va_list list) // no tiene porque recibir solo chars/
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
