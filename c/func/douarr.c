#include <stdio.h>
#include <stdlib.h>

#define M	2
#define N	3

print_arr()
{


}

//func(   )

int main()
{

	int a[M][N] = {{2,3},{7}};
	int (*p)[N] = a;
	int *q = &a[0][0];
	

	print_arr(a,M,N);
	
	
//func( a[0],  p+1,  *p,  q+3,   *q+3,   **p,   &a[1][0],  q[2],  p[1],  *p[0]   ,  a[1][0] ,  *(p+1)+1,   *(q+1)+1 ,  a+1  )



	exit(0);
}



