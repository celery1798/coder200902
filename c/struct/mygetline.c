#include <stdio.h>
#include <stdlib.h>


ssize_t mygetline(char **lineptr, size_t *n, FILE *stream)
{





}

int main()
{
	char *linebuf = NULL;
	size_t linesize = 0;
	
	

	while(1)
	{
		if(mygetline(&linebuf,&linesize,stdin) < 0)
			exit(1);
		printf("---linesize = %ld\n",linesize);

		puts(linebuf);
	}



	exit(0);
}


