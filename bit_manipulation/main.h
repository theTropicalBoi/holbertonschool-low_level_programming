#ifndef MAIN_H
#define MAIN_H

/* Library: */
#include <stdio.h>

/* Created Function: */
int _putchar(char c); /* Replicate the putchar function */

/* Prototype: */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
