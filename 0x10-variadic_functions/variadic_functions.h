#ifndef _VARIADIC_
#define _VARIADIC_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct print{
	char *c;
	void (*f)(va_list args);
} print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
