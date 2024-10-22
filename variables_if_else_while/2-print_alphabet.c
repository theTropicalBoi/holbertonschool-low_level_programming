#include <stdio.h>
/**
 * main - EntrY Point
 *
 * Description: Printing the alphabet in lowercase.
 * Return: Always 0 if succeed.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
