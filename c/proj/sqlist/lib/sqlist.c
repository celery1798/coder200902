#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "sqlist.h"


struct node_st
{
        datatype data[MAXSIZE];
        int last;
};

SQLIST *sqlist_create()
{
	struct node_st *l;
	
	l = malloc(sizeof(*l));
	if(l == NULL)
		return NULL;

	l->last = -1;
	return l;	
}

int sqlist_isempty(SQLIST *list)
{
	struct node_st *l = list;	
	if(l->last == -1)
		return 1;
	return 0;
}
int sqlist_isfull(SQLIST *list)
{
	struct node_st *l = list;

	if(l->last == MAXSIZE-1)
		return 1;
	return 0;
}

int sqlist_insert(SQLIST *list, int pos, datatype *newdata)
{
	int i;

	struct node_st *l = list;
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

int sqlist_setempty(SQLIST *list)
{
	struct node_st *l = list;

	if(l != NULL)
	{
		l->last = -1;
		return 0;
	}
}

int sqlist_total(SQLIST *list)
{
	struct node_st *l = list;
	return l->last;
}

int sqlist_delete(SQLIST *list,int pos, datatype *olddata)
{
	int i;
	struct node_st *l = list;

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

int sqlist_insert_order(SQLIST *list,datatype *newdata)
{// 5  13  *newdata == 27
	int i = 0;
	struct node_st *l = list;

	if(sqlist_isfull(l))
		return -1;	

	while(i <= l->last && *newdata > l->data[i])
		i++;

	return sqlist_insert(l,i,newdata);
}

int sqlist_delete_value(SQLIST *list,datatype *olddata)
{
	int pos;
	struct node_st *l = list;
	
	if(sqlist_isempty(l))
                return -2;

	pos = sqlist_find(l,olddata);
	if(pos >= 0)
		return sqlist_delete(l,pos,NULL);
}

int sqlist_find(SQLIST *list,datatype *mdate)
{
	struct node_st *l = list;
	int i;

	if(sqlist_isempty(l))
		return -2;

	for(i = 0 ; i <= l->last; i++)
		if(*mdate == l->data[i])
			return i;
	return -1;
}

void sqlist_union(SQLIST *list1,SQLIST *list2)
{//dest -> l1 
	int i;
	int pos,ret;
	struct node_st *l1 = list1,*l2 = list2;
	
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

void sqlist_display(SQLIST *list)
{
	int i;
	struct node_st *l = list;

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






