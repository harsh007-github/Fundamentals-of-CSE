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
