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
