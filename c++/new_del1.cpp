#include <iostream>
using namespace std;


int main()
{
	
	char *p = new char[128];
	
	if( p == NULL)
		return -1;

	
	delete []p;
	p = NULL;



	return 0;
}




