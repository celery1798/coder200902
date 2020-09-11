#include <iostream>
using namespace std;

class Clock
{
public:
	Clock();
	Clock(int h);
	void SetTime(int h,int m,int s);
	void ShowTime();
private:	
	int hour;
	int minute,second;

};  

Clock::Clock()
{
	cout << "Clock()" << endl;
	hour = minute = second = 0;
}

Clock::Clock(int h)
{
	cout << "Clock(int)" << endl;
	hour = h;
	minute = second = 0;
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

	c1.ShowTime();
	c2.ShowTime();

//	c1.SetTime(10,11,12);
//	c1.ShowTime();


	return 0;
}




