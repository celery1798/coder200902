#include <stdio.h>
#include <stdlib.h>


int main()
{
	int m = 10,j = 20,k = 30;	
	int *p[] = {&m,&j,&k};
//	int **q[3];
	int i;

	for(i = 0 ; i < sizeof(p)/sizeof(p[0]) ; i++)	
		printf("%d ",*(p[i]));
	printf("\n");

	exit(0);
}


