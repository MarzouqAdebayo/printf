#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(int c);
int print_string(char *s);
int print_decimal(int n);
int print_binary(int n);

#endif /* MAIN_H */
