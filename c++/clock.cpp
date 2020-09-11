#include <iostream>
using namespace std;

class Clock
{
public:
	void SetTime(int h,int m,int s);
	void ShowTime();
private:	
	int hour;
	int minute,second;

};  

void Clock::SetTime(int h,int m,int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Clock::ShowTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}


int main()
{
	Clock c1;

	c1.ShowTime();

	c1.SetTime(10,11,12);
	c1.ShowTime();


	return 0;
}




