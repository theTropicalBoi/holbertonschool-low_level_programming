#include "main.h"
/**
* _isalpha - check for lowercase or uppercase character.
* @c: The character to check.
* Return: 1 if "c" is lowercase or uppercase otherwise 0.
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
