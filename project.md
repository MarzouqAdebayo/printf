# PRINTF Project Board
## Background

 - **_printf.c** - This file contains the main `printf.c` function which processes the function arguments and passes them to the appropriate `print` function and returns the length of the printed string.
 - **main.h** - Contains all structures declaration and function prototypes
 - **_putchar.c** - This function mimics the `putchar` function of the stdio library.
 - **print_string.c** - This file takes strings and prints them to stdout using `_putchar` function from `_putchar.c`. It also returns the length of the string
 - **print_digit.c** - Contains function `print_digit` which prints a natural number to stdout and returns the length of the digit.

## Catch-up
 1. Added functionality for format specifiers for %c, %s, %%, %d.

## To-Do
### Task 0
#### N:B - If a to-do is done, kindly delete it from this list. Also, add to the list if there is a task to do.

 1. Take care of edge cases such as `"% s"`  or passing a specifier without an argument.

## Completed
