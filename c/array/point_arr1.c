#include <stdio.h>
#include <stdlib.h>

/*
	int a = 6;
	
	a += a -= a *= a/= 1;
	
	printf("a = %d\n",a);
*/


#define N	3
int main()
{
	int a[]  =  {5,6,7};
	int *p = a;  
	int i;	

	for(i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++)
		scanf("%d",p++);

	p = a;

	for(i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++)
		printf("%p -> %d\n",p+i,p[i]);
	printf("\n");

	exit(0);
}
	
