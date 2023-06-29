#include "main.h"
/**
 * cap_string - function to capitalize every single word in string
 * @str: the string
 * Return: return capitalized word
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == 44 ||
			str[i - 1] == 59 ||
			str[i - 1] == 46 ||
			str[i - 1] == 33 ||
			str[i - 1] == 63 ||
			str[i - 1] == 34 ||
			str[i - 1] == 123 ||
			str[i - 1] == 125 ||
			str[i - 1] == 40 ||
			str[i - 1] == 41 ||
			i == 0)
				str[i] -= 32;
			i++;
	}
	return (str);
}
