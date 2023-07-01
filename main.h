#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#define BU_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_b(va_list args);
int print_o(va_list args);
int print_u(va_list args);
int print_rev(va_list agrs);
int print_X(va_list args);
int print_x(va_list args);
int print_p(va_list args);
int print_R(va_list args);
int print_S(va_list args);
int print_hex(unsigned long int num);

#endif
