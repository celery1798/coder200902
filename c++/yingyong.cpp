#include <iostream>
using namespace std;

//struct student s1 -> &s1  -> struct student *p 
//struct student s1 -> s1 -> struct student &p


int main()
{
	int i = 1;	
	int &j = i;

	
	j = 100;
	i = 123;
	cout << &i << "  " << i << endl;
	cout << &j << "  " << j << endl;



	return 0;
}




