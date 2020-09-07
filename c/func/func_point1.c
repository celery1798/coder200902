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
	int ret,i;
//	int (*p)(int,int) = add;
//	int (*q)(int,int) = sub;
	int (*arr[2])(int,int) = {add,sub};   
//note      int(int,int)  * arr [2];
	

	for(i = 0 ; i < 2; i++)
	{
		ret = arr[i](a,b);
		printf("%d\n",ret);
	}


	exit(0);
}


