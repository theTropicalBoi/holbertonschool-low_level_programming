#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 * Return: Always 0 if succeed
 */
int main(void)
{
	char i;
	for (i = 48; i <= 57; i++)
	putchar(i);
	for (i = 97; i <= 102; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
