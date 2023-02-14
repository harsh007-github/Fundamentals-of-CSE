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

// Program to illustrate Multilevel Inheritance
#include<iostream>
using namespace std;
class length
{
	protected:
		float len;
	public:
		void setLength(float l)
		{
			len = l;
		}
};
class width : public length
{
	protected:
		float wid;
	public:
		void setWidth(float w)
		{
			wid = w;
		}
};
class height : public width
{
	protected:
		float hgt;
	public:
		void setHeight(float h)
		{
			hgt = h;
		}

};
class volume : public height
{
	public:
		void printVolume()
		{
			cout << "Volume of the cuboid is " << len * wid * hgt;
		}
};
int main()
{
	volume v;
	v.setHeight(5);
	v.setLength(6);
	v.setWidth(7);
	v.printVolume();
	return 0;
}

// Program to illustrate Multiple Inheritance
#include<iostream>
using namespace std;
class length
{
	protected:
		float len;
	public:
		void setLength(float l)
		{
			len = l;
		}
};

class breadth : public length
{
	protected:
		float brdth;
	public:
		void setBreadth(float b)
		{
			brdth = b;
		}
};

class area : public breadth
{
	public:
	void printArea()
	{
		cout << " Area is " << len * brdth;
	}
};

int main()
{
	area a;
	a.setLength(23);
	a.setBreadth(15);
	a.printArea();
	return 0;
}

// Program to illustrate Hierarchical Inheritance
#include<iostream>
using namespace std;
class data
{
	protected:
		float rad, hgt;
	public:
		void setData(float r , float h)
		{
			rad = r;
			hgt = h;
		}

};
class surfArea : public data
{
	public:
	void surfaceArea()
	{
		cout << "Surface area of cylinder is " <<  2 * 3.14 * rad *  hgt << endl;
	}
};
class volume : public data
{
	public:
		void volumeCylndr()
		{
			cout << "Volume of cylinder is " << 3.14 * rad * rad * hgt << endl;
		}
};

int main()
{
	volume v;
	v.setData(15 , 30);
	v.volumeCylndr();
	surfArea s;
	s.setData(15, 30);
	s.surfaceArea();
	return 0;
}
