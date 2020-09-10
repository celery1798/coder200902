#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"


int main()
{
	SQLIST *list,*list1;
	datatype a[] = {13,5,27,9};
	datatype b[] = {13,15,27,29};
	int i,ret;
	
	list = sqlist_create();
	if(list == NULL)
	{
		printf("sqlist_create() failed.\n");
		exit(1);
	}

	list1 = sqlist_create();
        if(list1 == NULL)
        {
                printf("sqlist_create() failed.\n");
                exit(1);
        }

	for(i = 0 ; i < sizeof(a)/sizeof(*a); i++)
	{
		//sqlist_insert(list,0, &a[i]);
		ret = sqlist_insert_order(list,&a[i]);
//		printf("INSERT_ORDER:%d\n",ret);
		
	}
	sqlist_display(list);



	for(i = 0 ; i < sizeof(b)/sizeof(*b); i++)
        {
                sqlist_insert(list1,0, &b[i]);

        }
        sqlist_display(list1);


	int value = 13;
/*	sqlist_insert(list,14,&value);
	sqlist_display(list);
*/
//	sqlist_delete(list,3,&value);
//	sqlist_delete(list,3,NULL);
//	sqlist_display(list); 

//	sqlist_delete_value(list,&value);

	sqlist_union(list,list1);
	sqlist_display(list);
	
	sqlist_destroy(list);

	exit(0);
}






