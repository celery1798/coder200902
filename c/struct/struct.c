#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NAMESIZE	32

typedef struct student
{
	int id;
	char name[NAMESIZE];
	float math;
}STU;

void init(STU *p)
{
	p->id = 10000;
	strcpy(p->name,"stu");
	p->math = 0;
}

void menu()
{
	printf("---MENU---\n1 SET\n2 CHANGE\n3 SHOW\nq QUIT\n");

}

void show(STU a)
{
	printf("%d %s %.2f\n",a.id, a.name, a.math);	
}

void set(STU *p)
{
	printf("Please enter for student: ");
	scanf("%d%s%f",&p->id, p->name, &p->math);
}

void change(STU *p)
{
	printf("Please enter the NEW NAME: ");
	scanf("%s",p->name);
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
			exit(1);
		switch(choice)
		{	
			case 1:
				set(&s);
				break;
			case 2:
				change(&s);
				break;
			case 3:
				show(s);
				break;
			default:
				break;
		}
		printf("\n\n");	
		sleep(2);		
	}
	exit(0);
}


