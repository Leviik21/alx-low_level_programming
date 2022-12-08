#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%zu bytes\n", sizeof(char));
	printf("%zu bytes\n", sizeof(int));
	printf("%zu bytes\n", sizeof(long int));
	printf("%zu bytes\n", sizeof(long long int));
	printf("%zu bytes\n", sizeof(float));
	return (0);
}
