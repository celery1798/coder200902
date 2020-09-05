#include <stdio.h>
#include <stdlib.h>

#define N	3
//	a[i] = *(a+i) = *(p+i) = p[i]
int main()
{
	int a[]  =  {5,6,7};
	int *p = a;  // &a[0],  a+0
	int i;	

	printf("sizeof(a) = %ld\n",sizeof(a));
	printf("sizeof(p) = %ld\n",sizeof(p));

	printf("a = %p\n",a);
	printf("a+1 = %p\n\n",a+1);

	printf("p = %p\n",p);
        printf("p+1 = %p\n\n",p+1);

//	p++;  //  p = p+1
//	printf("p = %p\n",p);

//F	a++; // a = a+1

	for(i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++)
		printf("%p -> %d\n",p+i,p[i]);
	
	printf("\n");

	exit(0);
}
	
