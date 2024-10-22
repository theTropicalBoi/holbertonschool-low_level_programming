#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print all single digit of base 10 from 0 with putchar.
 * Return: Always 0 if succeed.
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
putchar(n + '0');
putchar('\n');

return (0);
}
