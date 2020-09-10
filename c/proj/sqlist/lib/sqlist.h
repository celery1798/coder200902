#ifndef SQLIST_H__
#define SQLIST_H__


typedef int datatype;
#define MAXSIZE	128

typedef void SQLIST;


SQLIST *sqlist_create();

int sqlist_isempty(SQLIST *);
int sqlist_isfull(SQLIST *);

int sqlist_setempty(SQLIST *);

int sqlist_total(SQLIST *);

int sqlist_insert(SQLIST *, int pos, datatype *);
int sqlist_delete(SQLIST *,int pos, datatype *);

int sqlist_insert_order(SQLIST *,datatype *);
int sqlist_delete_value(SQLIST *,datatype *);

int sqlist_find(SQLIST *,datatype *);

//l1->3,5,7,9  l2->1,2,3,4,5  union->l1->3,5,7,9,1,2,4
void sqlist_union(SQLIST *l1,SQLIST *l2);

void sqlist_display(SQLIST *);

void sqlist_destroy(SQLIST *);




#endif


