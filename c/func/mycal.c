#include <stdio.h>
#include <stdlib.h>

// 1990-1-1  Mon

#define BASEYEAR	1990

int year_leap(int year)
{
	return year % 4 == 0 & year % 100 != 0 || year % 400 == 0;
}

int days_month(int m,int year)
{
	
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 31;
	else 
	{
		if( m == 4 || m == 6 || m == 9 || m == 11)
			return 30;
		else
		{	// 2
			return year_leap(year)+28;
		}
	}
}

int main()
{
	int y,m,sumdays = 0;
	int firstday,i,monthdays;	

	printf("Please enter (Usage: y/m):");
	scanf("%d/%d",&y,&m);


	// total days  -> BASEYEAR-1-1 ~ y-m-1  (eg:y=2020 m=9)
		
	for(i = BASEYEAR; i < y ; i++)
	{
		if(year_leap(i))
			sumdays += 366;
		else
			sumdays += 365;
	}
	
	for(i = 1; i < m ; i++)
		sumdays += days_month(i,y);
	
	sumdays ++;  //y-m-1

	// sumdays % 7 
	firstday = sumdays % 7;
	
	// total days of m 
	monthdays = days_month(m,y);

	//printf
	printf("\n      %d %d\n",m,y);
	printf("Su Mo Tu We Th Fr Sa\n");

	for(i = 0 ; i < firstday; i++)
		printf("   ");
	for(i = 1; i <= monthdays; i++)
		printf("%2d%c",i,(firstday+i)%7 == 0 ? '\n' : ' ');	

	printf("\n");

	exit(0);
}


