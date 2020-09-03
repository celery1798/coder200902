#include <stdio.h>
#include <stdlib.h>

#define  WEIGHT	3.0e-23
#define  NUM	950

int main()
{
	float quart,total;

	while(1)
	{
		printf("Please enter(q for quit) : ");
		if(scanf("%f",&quart) != 1)
			break;


		total = quart * NUM / WEIGHT;

		printf("total: %e\n",total);
	}

	exit(0);//return 0;
}


