#ifndef SQLIST_H__
#define SQLIST_H__

/*



*/

typedef int datatype;
#define MAXSIZE	128

typedef struct
{
	datatype data[MAXSIZE];
	int last;

}SQLIST;


SQLIST *sqlist_create();

int sqlist_isempty(SQLIST *);
int sqlist_isfull(SQLIST *);

int sqlist_setempty(SQLIST *);

int sqlist_total(SQLIST *);


/*
sqlist_insert:insert a newdata to the SQLIST
@l:a point to the SQLIST
@pos:the position that the newdata will be inserted
@newdata:the new data will be inserted.
return :-2       -1        0
*/
int sqlist_insert(SQLIST *l, int pos, datatype *newdata);
int sqlist_delete(SQLIST *,int pos, datatype *);

int sqlist_insert_order(SQLIST *,datatype *);
int sqlist_delete_value(SQLIST *,datatype *);

int sqlist_find(SQLIST *,datatype *);

//l1->3,5,7,9  l2->1,2,3,4,5  union->l1->3,5,7,9,1,2,4
void sqlist_union(SQLIST *l1,SQLIST *l2);

void sqlist_display(SQLIST *);

void sqlist_destroy(SQLIST *);




#endif


