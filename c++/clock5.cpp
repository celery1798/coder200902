#include <iostream>
using namespace std;

class Clock
{
public:
	Clock(int h=0,int m=0,int s=0);
	Clock(Clock &other);
	~Clock();
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

Clock::Clock(Clock &other)
{
	cout << "Clock(Clock&)" << endl;
	hour = other.hour;
	minute = other.minute;
	second = other.second;
}

Clock::~Clock()
{
	cout << "~Clock()" << endl;
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
	Clock c1;
	Clock c2=c1;
	Clock c3(24,23);


	return 0;
}




