#include <iostream>
using namespace std;


class Mouse
{
public:
	Mouse();
	void RasingChair();
	void FireCrackers();
	void BeatDrums();
	~Mouse();	
private:
	int hands;
};

class Cat
{
public:
	Cat();
	void EatMouse(Mouse &m);
	~Cat();
private:
	int mouth;

};

int main()
{
	Mouse *p = new Mouse[7];
	Cat cat;	

	for(i = 0 ; i < 4; i++)
		p[i].RasingChair();
	p[4].FireCrackers();
	p[5].BeatDrums();
	p[6].BeatDrums();

	for(i = 0 ; i < 7; i++)
		cat.EatMouse(p[i]);

	return 0;
}




