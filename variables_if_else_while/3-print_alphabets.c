#include <stdio.h>
/**
 * main - EntrY Point
 *
 * Description: Printing the alphabet in lowercase and then in uppercase.
 * Return: Always 0 if succeed.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
