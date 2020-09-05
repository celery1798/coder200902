#include <stdio.h>
#include <stdlib.h>
/*
m -> p -> t
n -> q -> j
i
t = 0 + 5 - 5;
t = 0;
*/
int main()
{
	int i = 1;
	int *p = &i;
	char ch = 'c';
	char *q = &ch;
	void *ptr = NULL;

	ptr = p ;
	q = ptr;




/*
	int *p = NULL;

	*p = 10;
	
	printf("%d\n",*p);
*/



/*
	int i = 1,j = 5,t = 0;
	int *p = &i, *q = &j;
	int **m = &p,**n = &q;


	*m = &t;
	
	t = *p + *q - **n;
	
	printf("%d,%d,%d\n",i,j,t);
//	p ->  
//	q ->
//	m ->
//	n ->
	

*/


/*

	*p 
	*q

	*p = i*j; ->  i = 5

	q = &i;
	*q = 100; ->  i = 100;	
	
*/	




	exit(0);
}


