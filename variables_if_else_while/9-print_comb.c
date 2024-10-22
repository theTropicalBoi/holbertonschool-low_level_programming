#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: Always 0 if succeed.
 */
int main(void)
{
    int i = 0;

    while (i <= 9) {
        putchar(i + '0');
        putchar(',');
        putchar(' ');
        i++;
    }
    putchar('\n');
    return (0);
}
