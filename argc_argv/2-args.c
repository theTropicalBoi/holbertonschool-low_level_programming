#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Arguments contents.
 * @argv: Arguments vectors.
 * Return: Always 0 if succeed.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
