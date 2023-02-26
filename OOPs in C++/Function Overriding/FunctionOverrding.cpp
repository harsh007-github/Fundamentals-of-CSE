//Program to illustrate Function Overriding
#include<iostream>
using namespace std;

class a
{
	public:
		 void base()
		{
			cout << "Base class content" << endl;
		}
};

class b: public a
{	
	public:
		void base()
		{
			cout << "Derived class content" << endl;
		}
};

int main()
{
	a base;
	b der;
	base.base();
	der.base();
	
	
	return 0;
}
