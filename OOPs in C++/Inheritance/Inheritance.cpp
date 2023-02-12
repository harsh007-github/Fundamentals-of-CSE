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
