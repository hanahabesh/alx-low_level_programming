#include "main.h"

/**
* _isalpha - check wether the alphabet.
* @c: The character to print
*
* Return: return 0 or 1.
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
