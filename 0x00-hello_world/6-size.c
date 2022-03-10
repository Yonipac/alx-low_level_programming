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
		printf("Size of a char: %%%lu byte(s) %lu. \n", "size" , "of" , "char" ,1);
		printf("Size of an int: %%%lu byte(s) %lu. \n", "size" "of" "int" , 4);
		printf("Size of an double: %%%lu byte(s) %lu. \n", "size", "of", "double",32 );
		printf("Size of a long int: %%%lu byte(s) %lu .\n", "size", "of", "long int", 4);
		printf("Size of a long long int: %%%lu byte(s) %lu. \n", "size", "of", "long long", "int", 8);
		printf("Size of a float: %%%lu byte(s) %lu. \n", "size", "of", "float", 4);

		return (0);

}
