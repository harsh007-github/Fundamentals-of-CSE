//Program for Classes and objects

#include <iostream>
using namespace std;

class example
{
private:
	int num1, num2;

public:
	void setData(int, int);
	void printData();
};
void example ::setData(int a, int b)
{
	num1 = a;
	num2 = b;
}
void example ::printData()
{
	cout << "First Number is " << num1 << " Second number is " << num2;
}

int main()
{
	example e;
	e.setData(123456, 4456434);
	e.printData();
	return 0;
}

//Program to illustrate use of static variables

#include <iostream>
using namespace std;
class result
{
  private:
    float percent;
    static int totalMarks;
  public:
    void setMarks(int a);
    void printPercent();
};
void result::setMarks(int a)
{
    result::totalMarks = a;
}
void result::printPercent()
{
  percent = (result::totalMarks / 500.0f) * 100;
  cout << "Your percentage is " << percent;
}
int result::totalMarks = 426;
int main()
{
  result r;
  int num;
  cout << "Enter Your Total Marks:";
  cin >> num;
  r.setMarks(num);
  r.printPercent();
}

//Basic Program to illustrate Default Constructor
#include<iostream>
using namespace std;
class example
{
	public:
		example()
		{
			cout << "This is a default constructor!!";
		}

};
int main()
{
	example e;
	return 0;
}


//Program for Parameterised constructor

#include <iostream>
using namespace std;

class constructor
{
  private:
    int num1 , num2;
  public:
    constructor(int a , int b)
    {
        num1 = a , num2 = b;
    }
    void printNum();
};

void constructor :: printNum()
{
    cout << "1st Number is " << num1 << endl;
    cout << "2nd Number is " << num2 << endl;
}

int main()
{
    int firstNum , secondNum;
    cout << " Enter 1st and 2nd Number:";
    cin  >> firstNum >> secondNum;
    constructor c(firstNum , secondNum);
    c.printNum();
    return 0;
}

//Basic Program to illustrate copy constructor
#include<iostream>
using namespace std;
class example
{
	private:
		int num1 , num2;
	public:
		example(int a , int b)
		{
			num1 = a;
			num2 = b;
		}
		example(example &d)
		{
			num1 = d.num1;
			num2 = d.num2;
			cout << num1 << " " << num2;
		}
};
int main()
{
	example e(15 , 16);
	example c(e);
	return 0;
}


//Program to illustrate Destructors
#include<iostream>
using namespace std;
class myClass
{
	private:
    	int *myArray;
	public:
    	myClass(int size)
		{
        	myArray = new int[size];
    	}
    	~myClass()
		{
        delete[] myArray;
        cout << "Resources allocated earlier is now free";
    	}
};
int main()
{
	myClass m(15);
	return 0;
}

//Program to illustrate UnaryOperator Overloading
#include<iostream>
using namespace std;
class complex
{
	private:
		int a , b;
	public:
		void setData(int x , int y)
		{
			a = x , b = y;
		}
		void showData()
		{
			cout << "a = " << a << " b = " << b;
		}
		complex operator -()
		{
			complex temp;
			temp.a = -(a);
			temp.b = -(b);
			return temp;
		}
};

int main()
{
	complex c1 , c2;
	c1.setData(15 , 4);
	c2 = -c1;
	c2.showData();
	return 0;
}

#include <iostream>
using namespace std;

class Complex
{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input()
       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real;
           cin >> imag;
       }

       // Operator overloading
       Complex operator - (Complex c2)
       {
           Complex temp;
           temp.real = real - c2.real;
           temp.imag = imag - c2.imag;

           return temp;
       }

       void output()
       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i";
           else
               cout << "Output Complex number: " << real << "+" << imag << "i";
       }
};

int main()
{
    Complex c1, c2, result;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();

    // In case of operator overloading of binary operators in C++ programming,
    // the object on right hand side of operator is always assumed as argument by compiler.
    result = c1 - c2;
    result.output();

    return 0;
}

//Program to overload increment operator(Both pre and post)
#include<iostream>
using namespace std;
class integer
{
	private:
		int num;
	public:
		void getData(int a)
		{
			num = a;
		}
		void showData()
		{
			cout << "Num = " << num << endl;
		}
		integer operator ++()
		{
			integer temp;
			temp.num = num + 1;
			return temp;
		}
		integer operator ++(int)
		{
			integer temp;
			temp.num = num++;
			return temp;
		}

};
int main()
{
	integer i , i1;
	i.getData(15);
	i.showData();
	i1 = ++i;
	i1.showData();
	i1 = i++;
	i1.showData();
	return 0;
}


								//Inheritance

//Program to illustrate Single Inheritance 
#include<iostream>
using namespace std;
class car
{
	protected:
		string carName;
	public:
		void setName( string enteredName)
		{
			carName = enteredName;
		}
};
class speed : public car
{
	private:
		int speed;
	public:
		void setSpeed(int enteredSpeed)
		{
			speed = enteredSpeed;
		}
		void showData()
		{
			cout << "Car Name: " << carName << endl;
			cout << "Car's Max Speed : " << speed << "km/h" << endl;
		}
};

int main()
{
	speed s;
	s.setName("Supra");
	s.setSpeed(36);
	s.showData();
	return 0;
}
