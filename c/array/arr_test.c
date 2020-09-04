#include <stdio.h>
#include <stdlib.h>

#define N	10

void test1()
{
	int a[N] = {1,1};
	int i,j,t;

	for(i = 2; i < N; i++)
		a[i] = a[i-1] +a[i-2];

	for(i = 0; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");


	for(i = N-1; i >= 0; i--)
                printf("%d ",a[i]);
        printf("\n");


	i = 0;
	j = N-1;

	while(i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	for(i = 0; i < N; i++)
                printf("%d ",a[i]);
        printf("\n");

}


void test5()
{
	int prime[1001] = {0};
	int i,j;
	
	for(i = 2; i < 1001 ; i++)	
	{
		if(prime[i] == 0)
		{
			for(j = i*2; j < 1001; j+=i)
				prime[j] = 1;
		}
	}
	
	for(i =  2; i < 1001 ; i++)
		if(prime[i] == 0)
			printf("%d ",i);
	printf("\n");


}

int main()
{


//	test1();
	test5();



	exit(0);
}


