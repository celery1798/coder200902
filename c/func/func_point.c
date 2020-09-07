#include <stdio.h>
#include <stdlib.h>


/*
int add(int,int)  ->  int(int,int)  add  {return i+j}
			type        name  =   value;

			int(int,int)  *p; -> int (*p)(int,int)

*/

int add(int i,int j)
{
	return i+j;
}

int sub(int i,int j)
{
	return i-j;
}


int main()
{
	int a = 3,b = 5;	
	int ret;
	int (*p)(int,int) = add;
	int (*q)(int,int) = sub;	

//	ret = add(a,b);
	ret = p(a,b);
	printf("%d\n",ret);

//	ret = sub(a,b);
	ret = q(a,b);
	printf("%d\n",ret);


	exit(0);
}


