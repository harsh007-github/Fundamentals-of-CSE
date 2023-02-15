//Program to illustrate Constructors
#include<iostream>
using namespace std;
class example
{
	public:
	example()
	{
		cout << "This is constructor of class example";
	}
};
int main()
{
	example e;
	return 0;
}

//Program to illustrate inheritance and constructors
#include<iostream>
using namespace std;
class example
{
	private:
		int num1;
	public:
	example(int a)
	{
		num1 = a;
		cout <<"Value of 1st No. is "<< num1 << endl;
	}
};
class example2 : public example
{
	private:
		int num2;
	public:
		example2(int x, int y):example(x)
		{
			num2 = y;
			cout <<"Value of 2nd No. is " << num2 << endl;
		}
};
int main()
{
	example2 e(15, 20);
	return 0;
}

//Program to illustrate destrutor
#include<iostream>
using namespace std;
class A
{
    public:
    ~A()
    {
        cout << "A's Destructor";
    }
};
class B : public A
{
    public:
    B()
    {}
    ~B()
    {
        cout << "B's destrutor" << endl;
    }


};
int main()
{
    B b;
    return 0;
}
