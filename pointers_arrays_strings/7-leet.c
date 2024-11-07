#include "main.h"
/**
 * leet - Encode a string in a array into 1337.
 * @s: The string to encode.
 * Return: The encoded string "s".
 */
char *leet(char *s)
{
	int i = 0; /* To count in the array "s" */
	int j = 0; /* To count in the array "letter" and "number" */

	char upper_letter[5] = {'A', 'E', 'O', 'T', 'L'};
	char lower_letter[5] = {'a', 'e', 'o', 't', 'l'};
	char number[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0; /* THE MISSING LINE TO RESET IT AFTER EACH CHAR */
		while (j < 5)
		{
			if (s[i] == upper_letter[j] || s[i] == lower_letter[j])
			/* Search the letter in the array*/
			/* Resulted to not use the "-32" in ASCII cuz it's fucked up */
			{
				s[i] = number[j]; /* Encode it  */
			}
			j++; /* Increment to the next letter */
		}
		i++; /* Increment to the next letter in array "s" */
	}

	return (s);
}
