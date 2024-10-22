#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print alphabet in lowercase except q and e.
 * Return: Always 0 if succeed.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'q', letter != 'e')
{
putchar(letter);
}
else
{
continue;
}
putchar('\n');
return (0);
}
