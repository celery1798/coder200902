#include <iostream>
using namespace std;

class Clock
{
public:
	Clock(int h=0,int m=0,int s=0);
	void SetTime(int h,int m,int s);
	void ShowTime();
private:	
	int hour;
	int minute,second;

};  

Clock::Clock(int h,int m,int s)
{
        cout << "Clock(3int=0)" << endl;
        hour = h;
        minute = m;
	second = s;
}

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
	Clock c1,c2(12);
	Clock c3(24,23);

	c1.ShowTime();
	c2.ShowTime();
	c3.ShowTime();

//	c1.SetTime(10,11,12);
//	c1.ShowTime();


	return 0;
}




