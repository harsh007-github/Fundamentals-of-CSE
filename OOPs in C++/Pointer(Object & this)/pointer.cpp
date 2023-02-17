//Program to illustraate Object pointer
#include<iostream>
using namespace std;
class A
{
	private:
		int a , b;
	public:
		void setData(int x, int y)
		{
			a = x;
			b = y;
		}
		void showData()
		{
			cout << a << " " << b;
		}
};
int main()
{
	A *ptr , a;
	ptr = &a;
	ptr->setData(15, 15);
	ptr->showData();
	return 0;
}


//Program to illustrate this pointer 
#include<iostream>
using namespace std;
class dimensions
{
	private:
		int a , b;
	public:
		void setData(int a, int b)
		{
			this -> a = a;
			this -> b = b;
		}
		void showData()
		{
			cout << a << " " << b;
		}
};
int main()
{
	dimensions d;
	d.setData(15, 15);
	d.showData();	
}
