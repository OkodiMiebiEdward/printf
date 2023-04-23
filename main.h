#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/*Helper functions*/
int print_number(signed long n, int len);
int print_string(char *s, int len);
int print_character(int c, int len);
int check_flag(char f, va_list ap, int len, const char *string);
int _printf(const char *format, ...);
int print_error_check(const char *string);
int _putchar(char c);

#endif
