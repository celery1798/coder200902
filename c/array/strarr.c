#include <stdio.h>
#include <stdlib.h>


int main()
{

	char str[6];

//	gets(str);
	fgets(str,6,stdin);
	puts(str);


/*
	char str[600];

	scanf("%s",str);	//hello world  -> F     helloworld -> T
	puts(str);
*/




/*
	int i;
	char str[5] = {'a','b','c','d','e'};
	char str1[5] = {"abcd"};

//F	puts(str);
	for(i = 0 ; i < sizeof(str)/sizeof(str[0]); i++)
		putchar(str[i]);
	printf("\n");
	puts(str1);
*/
	

	exit(0);
}


