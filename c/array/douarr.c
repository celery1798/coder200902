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
	
	printf("a = %p\n",a);
	printf("a+1 = %p\n\n",a+1);

	for(i = 0; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)
	//		printf("%p -> %d\n",&a[i][j],a[i][j]);
			printf("%p -> %d\n",*(a+i)+j,*(*(a+i)+j));
		printf("\n");
	}


	exit(0);
}



