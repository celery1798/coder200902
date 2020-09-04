#include <stdio.h>
#include <stdlib.h>

/*
	a[N] :  a[0] ~ a[N-1]

	a[i] == *(a+i) == *(i+a) == i[a]


*/


#define N	3

int main()
{
	int a[]  =  {5,6,7};
	int i,j;	

	printf("a = %p\n",a);
	printf("a+1 = %p\n",a+1);


	for(i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++)
		printf("%p -> %d\n",&(a[i]),a[i]);
//		printf("%p -> %d\n",a+i,*(a+i));
//		printf("%p -> %d\n",a+i,i[a]);
	
	printf("\n");

//FF	a[300] = 19000;		->   *(a+300)
//FF	printf("a[300] = %d\n",a[300]);

	exit(0);
}
	
