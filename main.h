#ifndef _PRINTF_
#define _PRINTF_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    const char *format;
    int (*_printf)(const char *, ...);
} form_t;


int _putchar(char c);
void print_s(va_list list);
void print_c(va_list list);
void print_percent();
void print_d(va_list list);
void print_i(va_list list);
int _printf(const char *format, ...);

#endif

