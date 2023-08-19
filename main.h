#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(int c);
int print_string(char *s);
int print_digit(int n);

#endif /* MAIN_H */
