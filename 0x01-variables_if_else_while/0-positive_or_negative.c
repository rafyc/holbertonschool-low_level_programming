#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - all
* Return: retourne 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0){
		printf( %n "is positive\n", n);
	}

	if (n==0){
		printf( %n "is zero\n", n);
	}

	if (n<0){
		printf( %n "is negative\n", n);
	}

	return (0);
}
