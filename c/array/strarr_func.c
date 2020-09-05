#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[32] = "hello";
	char str2[] = "hello";
	char str[32];

//	strcpy(str,str1);
	strncpy(str,str1,2);
	puts(str);
	
/*
	
	printf("%ld\n",sizeof(str1));
	printf("%ld\n",sizeof(str2));


	printf("%ld\n",strlen(str1));
	printf("%ld\n",strlen(str2));
*/

	exit(0);
}

 
