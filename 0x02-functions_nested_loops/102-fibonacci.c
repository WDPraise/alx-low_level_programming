
#include <stdio.h>

/**
<<<<<<< Updated upstream
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
=======
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
>>>>>>> Stashed changes
 */

int main(void)
{
	long int sum;
	long int first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
