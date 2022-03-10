#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: using sizeof to print the size of various types.
 *     *
 *      * Return: Always 0 (Succesful)
*/

int main(void)
{

		/* sizeof evaluates the size of a variable */
		printf("Size of a char: %lu byte(1)\n", sizeof(char));
		printf("Size of an int: %lu byte(4)\n", sizeof(int));
		printf("Size of an double: %lu byte(4)\n", sizeof(double));
		printf("Size of a long int: %lu byte(8)\n", sizeof(long int));
		printf("Size of a long long int: %lu byte(8)\n", sizeof(long long int));
		printf("Size of a float: %lu byte(4)\n", sizeof(float));

								return (0);

}
