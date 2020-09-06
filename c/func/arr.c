#include <stdio.h>
#include <stdlib.h>


#define N	3

void print_arr(int *p,int n)
{
	int i;
//	printf("%ld\n",sizeof(p));

	for(i = 0 ; i < n; i++)
		printf("%d ",*p++);
	printf("\n");
}

//void func(int *, int, int, int*, int*, int*, int, int, int, int * )

int main()
{
	int a[]  =  {5,6,7,8,9,10,11,12,13};
	int *p = a;

	print_arr(p,sizeof(a)/sizeof(*a));

//	func(a, *a , *p , p++ , p+1 , a+2 , *a+2 , a[5] , *(a+4)*5, &p[3] );

	exit(0);
}
	
