#ifndef _PRINTF_
#define _PRINTF_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
void print_s(va_list args);
void print_c(va_list args);
void print_d(va_list args);
void print_i(va_list args);
int _printf(const char *format, ...);

#endif

