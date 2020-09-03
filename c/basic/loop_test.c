#include <stdio.h>
#include <stdlib.h>


#define INIT	100
#define RATE_SIMP	0.10
#define RATE_COMP	0.05

void test1()
{
	int year = 0;
	double d1 = INIT,d2 = INIT;	

	while(d1 >= d2)
	{
		d1 += INIT * RATE_SIMP;
		d2 += d2 * RATE_COMP;
		year++;
	}

	printf("year = %d\n",year);
	printf("d1 = %lf, d2 = %lf\n",d1,d2);
}


/*
1    1   2      3     5      8         13         21
f1   f2  f1+f2  
         f1
*/

void test4()
{
	int f1 = 1,f2 = 1;
	int i;

	for(i = 1 ; i <= 20; i++)
	{
		printf("%12d%12d",f1,f2);
		if(i % 2 == 0)
			printf("\n");
		
		f1 += f2;
		f2 += f1;
	}

}

void test5()
{
	int i,j;

	for(i = 1 ; i <= 9; i++)
	{
	
		for(j = 1; j <= i ;j++)
			printf((j==i) ? "%d*%d=%-4d\n" : "%d*%d=%-4d",i,j,i*j);
	}
}

void test6()
{
	int i,j,k;

	for(i = 0; i < 100/5 ; i++)
	{	
		for(j = 0 ; j < 100/3; j++)
		{
			k = 100 - i - j;
			if(k % 3 == 0 && 5*i + 3*j + k/3 == 100)
				printf("%d %d %d\n",i,j,k);		
		}
	}
}	

#define ROW	6

void test9()
{
	int i,j;
	char start = 'F';
	
	
	for(i = 0 ; i < ROW; i++)
	{
		// _
		for(j = 0 ; j < i; j++)
			printf("_");

		
		// ch
		for(j = 0,start = 'F'; j <= i; j++,start--)
			printf("%c",start);
		printf("\n");
	}
}

#define MIN	0
#define MAX	100

void test17()
{
	int score;
	int min = MAX,max = MIN;

	printf("Please enter(q for quit) : ");
	while(scanf("%d",&score) == 1)
	{
		if(score < MIN || score > MAX)
		{
			printf("ERROR! Try again : ");
			continue;
		}
		min = score < min ? score : min;		
		max = score > max ? score : max;
		printf("Please enter(q for quit) : ");
	}
	printf("min = %d\nmax = %d\n",min,max);
}

int main()
{

//	test1();
//	test4();
//	test5();
//	test6();
//	test9();
	test17();
	


	exit(0);
}





