//Program to illustrate Templates
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


