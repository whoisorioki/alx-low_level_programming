#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (a > b && a < c)
		largest = c;
	else if (a < b && a > c)
		largest = b;
	else if (b > a && b > c)
		largest = b;
	else if (b > a && b < c)
		largest = c;
	else if (b < a && b > c)
		largest = a;
	else if (c > b && c > a)
		largest = c;
	else if (c > b && c < a)
		largest = a;
	else if (c < b && c > a)
		largest = b;
	else if (a == b && c > a)
		largest = c;
	else if (a == b && c < a)
		largest = a;
	else if (b == c && a > c)
		largest = a;
	else if (b == c && a < c)
		largest = c;
	else if (c == a && b > a)
		largest = b;
	else if (c == a && b < a)
		largest = a;
	else if (a == b && b == c)
		largest = a;

	return (largest);
}
