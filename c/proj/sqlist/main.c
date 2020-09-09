#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"


int main()
{
	SQLIST *list;
	datatype a[] = {3,5,7,9};
	int i;
	
	list = sqlist_create();
	if(list == NULL)
	{
		printf("sqlist_create() failed.\n");
		exit(1);
	}

	for(i = 0 ; i < sizeof(a)/sizeof(*a); i++)
	{
		sqlist_insert(list,0, &a[i]);
		
	}
	sqlist_display(list);

	int value = 1000;
/*	sqlist_insert(list,14,&value);
	sqlist_display(list);
*/
//	sqlist_delete(list,2,&value);
//	sqlist_display(list); 
	
	sqlist_destroy(list);

	exit(0);
}






