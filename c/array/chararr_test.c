#include <stdio.h>
#include <stdlib.h>


// i    am a   student
// ' '  'x'

int main()
{
	char str[1024];	
	int flag = 0,count = 0,i;

	fgets(str,1024,stdin);
//	gets(str);

	for(i = 0 ; str[i] != '\0' && str[i] != '\n' ; i++)
	{
		if(str[i] == ' ')
		{		
			flag = 0;
		}			
		else // str[i] == char
		{	
			if(flag == 0)
			{
				count++;
				flag = 1;
			}
		}

	}


	printf("TOTAL:%d\n",count);

	exit(0);
}


