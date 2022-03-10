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
		printf("Size of a char: %lu byte(s)\n", sizeof(char)1);
		printf("Size of an int: %lu byte(s)\n", sizeof(int)4);
		printf("Size of an double: %lu byte(s)\n", sizeof(double));
		printf("Size of a long int: %lu byte(s)\n", sizeof(long int)4);
		printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int)8);
		printf("Size of a float: %lu byte(s)\n", sizeof(float)4);

		return (0);

}
