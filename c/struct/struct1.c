#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NAMEMAX		1024

typedef struct student
{
	int id;
	char *name;
	float math;
}STU;

void init(STU *p)
{
	p->id = 10000;
	p->name = NULL;
//	p->name = malloc(1);
//	*(p->name) = '\0';
	p->math = 0;
}

void menu()
{
	printf("---MENU---\n1 SET\n2 CHANGE\n3 SHOW\nq QUIT\n\n");

}

void show(STU *p)
{
	printf("%d %s %.2f\n",p->id, p->name, p->math);	
}

int  set(STU *p)
{
	char newname[NAMEMAX];
	printf("Please enter for student: ");
	scanf("%d%s%f",&p->id,newname,&p->math);
	/*if error,  return -2 */
	free(p->name);
	p->name = malloc(strlen(newname)+1);
	if(p->name == NULL)
		return -1;
	strcpy(p->name,newname);
	return 0;
}

int change(STU *p)
{
	char newname[NAMEMAX];

	printf("Please enter the NEW NAME: ");
	scanf("%s",newname);
	/*if error,  return -1 */
	
	free(p->name);
	p->name = malloc(strlen(newname)+1);
        if(p->name == NULL)
                return -1;
        strcpy(p->name,newname);
        return 0;
}

void destroy(STU *p)
{
	free(p->name);
}

int main()
{
	STU s;	// = {10010,"Alan",89.9};	
	int choice;

	init(&s);

	while(1)
	{
		menu();
		if(scanf("%d",&choice) != 1)
			break;
		switch(choice)
		{	
			case 1:
				set(&s);
				break;
			case 2:
				change(&s);
				break;
			case 3:
				show(&s);
				break;
			default:
				break;
		}
		printf("\n\n");	
		sleep(2);		
	}

	destroy(&s);

	exit(0);
}


