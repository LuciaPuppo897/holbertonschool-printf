#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 *print_d - prints an integer in base 10
 *@list: list of arguments from va_list
 *return: nothing
 */

void print_d(va_list list)
{
	int num = va_arg(list, int);
	char arr1[10000];   // crea un array con  10000 espacios
	int n = 10;         // en base decimal

	itoa(num, arr1, n); // Convertir el número en una cadena de caracteres
	if (arr1 != NULL)
	{
		for (size_t i = 0; i < strlen(arr1); i++)
		{
			putchar(arr1[i]);
		}
	}
}

/**
 *print_i - prints an integer in base 10
 *@list: list of argument from va_list
 *return: nothing
 */

void print_i(va_list list)
{
	int num = va_arg(list, int);
	char arr1[10000];   // crea un array con  10000 espacios
	int n = 10;         // en base decimal
	itoa(num, arr1, n); // Convertir el número en una cadena de caracteres

	if (arr1 != NULL)
	{
		for (size_t i = 0; i < strlen(arr1); i++)
		{
			putchar(arr1[i]);
		}
	}
}
// o directamente llamamos a print_d dos veces

