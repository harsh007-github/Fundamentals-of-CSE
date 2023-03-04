//Program to illustrate Function Overloading
#include<iostream>
using namespace std;
class A
{
	protected:
		int a , b;
	public:
		void print(int x , int y)
		{
			a = x;
			b = y;
			cout << a << " " << b << endl;
		}
};
class B : public A
{
	float  f , g;
	public:
		void print(float x, float y)
		{
			f = x;
			g = y;
			cout << f << " " << g << endl;
		}

};
int main ()
{
	B b;
	b.print(15.236, 25.2365);
	return 0;
}

//Program to illustrate Virtual Function
#include<iostream>
using namespace std;
class base 
{
	public:
		virtual void printContent()
		{
			cout << "This is some base class content";
		}
};
class derived : public base
{
	public:
		void printContent()
		{
			cout << "This is some derived class content";	
		}	
};
int main()
{
	base* bptr;
	derived der;
	bptr = &der;
	bptr -> printContent();
	return 0;
}
