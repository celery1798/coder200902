#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define M	3
#define N	4

float stu_ave(int *p, int n)
{
	float sum = 0;
	int i;

	for(i = 0 ; i < n ; i++)
		sum += p[i];
	return sum/n;
}

void stu_find(int (*p)[N],int n,int id)
{
	int i;

	for(i = 0 ; i < n; i++)
		printf("%d ",*(*(p+id)+i));
	printf("\n");
}

int main()
{

	int a[M][N] = {{98,67,85,80},{77,88,99,100},{92,81,67,75}};
	float average;
	int id;
	
	average = stu_ave(*a,M*N);
	printf("AVER: %.2f\n",average);

	sleep(1);
	printf("Pleaer enter the ID : ");
	scanf("%d",&id);
	if(id < 0 || id >= M)	
	{
		printf("Can not find!\n");	
		exit(1);
	}

	stu_find(a,N,id);

	exit(0);
}



