//Program to illustrate Function Templates
#include<iostream>
using namespace std;

template <typename t>
maxInt(t a , t b)
{
	return((a>b)?a:b);
}

int main()
{
	int a = 15, b = 16;
	cout << maxInt(a , b) << " ";
}
//Program to illustrate class Templates
#include<iostream>
using namespace std;
template<class x>
class area
{
	private:
	x num1 , num2;	
	public:
		void setData(x a , x b)
		{
			num1 = a;
			num2 = b;
		}
		void printData()
		{
			cout<<"Area is " << num1 * num2; 
		}
};
int main()
{
	area <int>a;
	int c , d;
	cout << "Enter dimensions of rectangle:";
	cin >> c >> d;
	a.setData(c , d);
	a.printData();
	return 0;
}


