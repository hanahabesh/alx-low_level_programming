#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addtion of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - t of two numbers
 * @a: the first number
 * @b: the second numbe
 * Return: the sum of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multply of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - addtion of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the division of integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - addtion of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
