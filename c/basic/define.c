#include <stdio.h>
#include <stdlib.h>


#define PLUS	(2+3)
	
#define SEC_YEAR	(60LL*60LL*24LL*365LL)

//#define MAX(a,b)	((a) > (b) ? (a) : (b))
//#define MAX(a,b)	({int A=(a),B=(b); (A) > (B) ? (A) : (B);})
#define MAX(a,b)	({typeof(a) A=(a),B=(b); (A) > (B) ? (A) : (B);})



int main()
{
	int i = 3 , j = 5;	

//	printf("%d\n",PLUS*PLUS);

	printf("i = %d, j = %d\n",i,j);

	printf("%d\n",MAX(i++,j++));

	printf("i = %d, j = %d\n",i,j);

	exit(0);
}

