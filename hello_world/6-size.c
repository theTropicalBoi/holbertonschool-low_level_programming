#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print the size of various type.
 * Return: Always 0 if Success.
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %d byte(s)\n", (int)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
