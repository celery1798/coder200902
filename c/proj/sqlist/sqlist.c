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

int sqlist_setempty(SQLIST *l)
{
	if(l != NULL)
	{
		l->last = -1;
		return 0;
	}
}

int sqlist_total(SQLIST *l)
{
	return l->last;
}

int sqlist_delete(SQLIST *l,int pos, datatype *olddata)
{
	int i;

	if(sqlist_isempty(l))
		return -1;

	if(pos < 0 || pos > l->last)
		return -2;

	if(olddata != NULL)
		*olddata = l->data[pos];

	i = pos+1;
	while( i <= l->last)
	{
		l->data[i-1] = l->data[i];	
		i++;
	}

	l->last --;

	return 0;
}

int sqlist_insert_order(SQLIST *l,datatype *newdata)
{// 5  13  *newdata == 27
	int i = 0;

	if(sqlist_isfull(l))
		return -1;	

	while(i <= l->last && *newdata > l->data[i])
		i++;

	return sqlist_insert(l,i,newdata);
}

int sqlist_delete_value(SQLIST *l,datatype *olddata)
{
	int pos;
	if(sqlist_isempty(l))
                return -2;

	pos = sqlist_find(l,olddata);
	if(pos >= 0)
		return sqlist_delete(l,pos,NULL);
}

int sqlist_find(SQLIST *l,datatype *mdate)
{
	int i;

	if(sqlist_isempty(l))
		return -2;

	for(i = 0 ; i <= l->last; i++)
		if(*mdate == l->data[i])
			return i;
	return -1;
}

void sqlist_union(SQLIST *l1,SQLIST *l2)
{//dest -> l1 
	int i;
	int pos,ret;
	
	if(sqlist_isempty(l2))
		return;	

	while(i <= l2->last)
	{
		pos = sqlist_find(l1,&l2->data[i]);
//		printf("pos:%d\n",pos);
		if(pos == -1)
		{
			ret = sqlist_insert(l1,l1->last+1,&l2->data[i]);
//			printf("RET : %d\n",ret);
		}
		i++;
	}
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






