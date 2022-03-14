#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Succesful)
*/

int main(void)
{	

	/* sizeof evaluates the size of a variable */
	int i;
	double d;
	char c;

	prnitf("size of a char: %d byte(s)\n",sizeof(char));
	printf("size of an int: %d byte(s)\n",sizeof (int));
	printf("size of a long int: %d byte(s)\n",sizeof (long int));
	printf("size of a long long int: %d byte(s)\n",sizeof(long long int));
	printf("size of a float: %d byte(s)\n",sizeof (float));

	return(0);
}
