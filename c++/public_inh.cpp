#include <iostream>
using namespace std;

class A
{
	public:
		A(){ cout << "A::A()"<< endl;	}
		void f1()	
		{ cout << "A::f1()" << endl; 	}
		void geta()
		{ cout << a << endl; 		}
		~A(){ cout << "A::~A()"<< endl;	}
	protected:
		void f2()
                { cout << "A::f2()" << endl;    }
	private:
		int a;
};

class B:public A
{
public:
	B(){ cout << "B::B()"<< endl;	}
	void f3()
        { cout << "B::f3()" << endl;    }
	~B(){ cout << "B::~B()"<< endl;	}
private:
	int b;
};

int main()
{
//	A a1;
	B b1;
	b1.geta();
	
	return 0;
}




