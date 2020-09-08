#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int *p = NULL;
	int i = 1000000;;

	p = malloc(sizeof(*p));	
	if(p == NULL)
	{
		printf("malloc failed.\n");
		exit(1);
	}

	*p = 123;
	printf("%p --> %d\n",p,*p);

	free(p);
	p = NULL;	/*!!!!!*/
	

	//......

	p = &i;
	*p = 1000;
	printf("%p --> %d\n",p,*p);


	exit(0);
}


