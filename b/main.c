#include <stdio.h> // printf()
#include <stdlib.h> // rand()
#include <time.h> // time()

int main()
{
	// declaration
	int array[11]; // elements 0..10
	int i;

	// step 1: initialize the array
	for (i=0; i<=10; i++)
		array[i] = i;

	// step 2: sort the array
	srand( (unsigned)time( NULL ) ); // randomize the rand() function
	for (i=0; i<=10; i++)
	{
		int index1 = i;
		int index2 = rand()%11; // x % 11 = 0..10

		// swap elements index1 and index2
		int temp;
		temp = array[index1];
		array[index1] = array[index2];
		array[index2] = temp;
	}

	// show the results.
	for (i=0; i<=10; i++)
		printf("array[%d] = %d\n",i,array[i]);

	return(0);
}
