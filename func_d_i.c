#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_d - prints an integer in base 10
 *@args: list of arguments from va_list
 *return: nothing
 */

void print_d(va_list args)
{
	int num = (va_arg(args, int));
	int p = 0;
	int digit[20];
	char sign;

	if (num < 0)
	{
	num = -num;
	sign = 1;
	}
	while (num != 0)
	{
	digit[p] = num % 10;
	num /= 10;
	p++;
	}

	if (sign == 1)
	_putchar ('-');

	while (p > 0)
	{
	_putchar ('0' + digit[--p]);
	}
}
