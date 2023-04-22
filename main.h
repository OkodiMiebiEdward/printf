#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/*Helper functions*/
void print_string(char *s, int *len);
void print_character(int c, int *len);
int check_flag(char f, void *arg, int *len);
int _printf(const char *format, ...);
int print_error_check(const char *string);
int _putchar(char c);




#endif
