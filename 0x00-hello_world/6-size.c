#include <stdio.h>
/**
 * main-entry point for the program.
 *
 * Return:0 if no error, return non zero if errors
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf(Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}

	
