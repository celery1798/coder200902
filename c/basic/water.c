#include <stdio.h>
#include <stdlib.h>

#define  WEIGHT	3.0e-23
#define  NUM	950

int main()
{
	float quart,total;

	printf("Please enter : ");
	scanf("%f",&quart);


	total = quart * NUM / WEIGHT;

	printf("total: %e\n",total);


	exit(0);//return 0;
}


