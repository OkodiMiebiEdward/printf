#ifdef MAIN_H
#undef MAIN_H
#endif
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>


#define BUFFER_SIZE 1024

int string_length(char *s);
int print_temp(char temp[], int *index);
void char_to_temp(char temp[], int *index, char c);
void str_to_temp(char temp[], int *index, char *str);
void number_to_temp(char temp[], int *index, int num);
int check_specifier(char c);
void binary_to_tmp(char temp[], int *index, unsigned int num);
void non_printable_strings_to_temp(char temp[], int *index, char *str);
void pointer_to_temp(char temp[], int *index, void *address);
void octal_to_temp(char temp[], int *index, unsigned int num);
void hexadecimal_to_temp_upper(char temp[], int *index, unsigned int num);
void hexadecimal_to_temp(char temp[], int *index, unsigned int num);
void unsigned_num_to_temp(char temp[], int *index, unsigned int num);
int _printf(char *format, ...);
int determine_specifier(char temp[], int *index, va_list args, char format);

#endif
