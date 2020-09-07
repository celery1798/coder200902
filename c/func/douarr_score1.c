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

int *stu_find(int (*p)[N])
{
	int id;

	printf("Pleaer enter the ID : ");
        scanf("%d",&id);
        if(id < 0 || id >= M)
        {
		return NULL;
        }

	return *(p+id);

}

int main()
{

	int a[M][N] = {{98,67,85,80},{77,88,99,100},{92,81,67,75}};
	float average;
	int *ret,i;
	
	average = stu_ave(*a,M*N);
	printf("AVER: %.2f\n",average);

	ret = stu_find(a);
	if(ret != NULL)
	{
		for(i = 0 ; i < N; i++)
			printf("%d ",ret[i]);
		printf("\n");
	}


	exit(0);
}



