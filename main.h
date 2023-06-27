#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#define BU_SIZE 1024
/**
 * _putchar - print characters.
 * @c: character.
 * Return: 1
 */
int _putchar(char c)
{
	return( write(1, &c, 1));
}
int _printf(const char *format, ...);
int _switch(const char *format, va_list par, int plus, int d);
int _print_char(char var, int plus);
int print_string(char *ptr, int plus);
void print_buffer(char buffer[], int *b_ind);
int handle_spcfr(const char format, int plus, va_list par);
int _print_char(char charc, int plus);
int print_string(char *pptr, int plus);
int print_intr(int intr);

#endif
