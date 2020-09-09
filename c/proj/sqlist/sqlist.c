#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "sqlist.h"

SQLIST *sqlist_create()
{
	SQLIST *l;
	
	l = malloc(sizeof(*l));
	if(l == NULL)
		return NULL;

	l->last = -1;
	return l;	
}

int sqlist_isempty(SQLIST *l)
{
	if(l->last == -1)
		return 1;
	return 0;
}
int sqlist_isfull(SQLIST *l)
{
	if(l->last == MAXSIZE-1)
		return 1;
	return 0;
}

int sqlist_insert(SQLIST *l, int pos, datatype *newdata)
{
	int i;

	if(sqlist_isfull(l))
		return -1;
	
	if(pos < 0 || pos > l->last+1)
		return -2;


	i = l->last;
	
	while(i >= pos)
	{
		l->data[i+1] = l->data[i];
		i--;
	}
	l->data[pos] = *newdata;
	l->last++;

	return 0;
}

void sqlist_display(SQLIST *l)
{
	int i;

	if(sqlist_isempty(l))
		return ;
	
	for(i = 0 ; i <= l->last; i++)
		printf("%d ",l->data[i]);
	printf("\n");

}

void sqlist_destroy(SQLIST *l)
{
	free(l);
}






