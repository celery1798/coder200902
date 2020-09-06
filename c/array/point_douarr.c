#include <stdio.h>
#include <stdlib.h>

/*
	a[i][j] ->  *(*(a+i)+j)
	&a[i][j] -> *(a+i)+j
*/

int main()
{

	int a[2][3] = {{2,3},{7}};
	int i,j;
	int (*p)[3];
	int *q = *(a+0);//  *a,  &a[0][0],  a[0]  

	p = a;

	printf("a = %p\n",a);
	printf("a+1 = %p\n\n",a+1);
	printf("p = %p\n",p);
	printf("p+1 = %p\n\n",p+1);

	for(i = 0; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)
	//		printf("%p -> %d\n",&a[i][j],a[i][j]);
			printf("%p -> %d\n",*(p+i)+j,*(*(p+i)+j));
		printf("\n");
	}

	for(i = 0 ;i < 2*3; i++)
		printf("%d ",*q++);
	printf("\n");
	exit(0);
}



