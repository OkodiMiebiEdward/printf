#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int string_length(char *s);
int print_temp(char temp[], int *index);
void char_to_temp(char temp[], int *index, char c);
void str_to_temp(char temp[], int *index, char *str);
void number_to_temp(char temp[], int *index, int num);
int check_specifier(char c);
int _printf(char *format, ...);
void binary_to_tmp(char temp[], int *index, unsigned int num);
int determine_specifier(char temp[], int *index, va_list args, char format);

#endif
