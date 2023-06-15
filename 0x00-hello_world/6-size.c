#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chartype;
	int inttype;
	long int longint;
	long long int longlongint;
	float floatingbyte;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of an long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of an int: %zu byte(s)\n", sizeof(longlongint));
	printf("Size of an int: %zu byte(s)\n", sizeof(floatingbyte));
	return (0);
}
