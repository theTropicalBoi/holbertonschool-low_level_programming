#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints the lowercase alphabet in reverse.
 * Return: Always 0 if succeed.
 */
int main(void)
{
	int letter;

	for (letter = 122; letter >= 97; letter--)
	putchar(letter);
	putchar('\n');
	return (0);
}
