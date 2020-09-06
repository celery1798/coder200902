#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i = 1,j = 18;
	const int *const p = &i;

//F	p = &j;
//F	*p = 100;



/*	
	int i = 1,j = 18;
	const int *p = &i;

//T	p = &j;
//F	*p = 100;
	printf("%d\n",*p);
*/

/*
	int i = 1,j = 18;
	int *const p = &i;

			
//F	p = &j;
	*p = 100;


	printf("%d\n",i);
	
*/

/*
	const int i = 1;

	*p = 100;

	printf("%d\n",i);
*/
	exit(0);
}


