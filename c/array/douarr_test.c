#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[5][4] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int i,j;


	for(i = 0 ; i < 4; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			a[4][j] += a[i][j];
			a[i][3] += a[i][j];
			a[4][3] += a[i][j];
		}
	
	}	
	
	for(i = 0 ; i < 5; i++)
        {
                for(j = 0 ; j < 4; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	




	exit(0);
}

