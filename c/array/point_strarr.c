#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char str[32] = "hello";
	char str1[32] = "world";
        char *p = str1;

        puts(str);
        puts(p);

 //T    	strcpy(str,p);
//T     strcpy(p,str);
        
        puts(str);
        puts(p);


/*
	char str[32] = "hello";
	char *p = "world";

	puts(str);
	puts(p);

//T	strcpy(str,p);
//F	strcpy(p,str);
	
	puts(str);
        puts(p);

*/

	exit(0);
}


