//Basic Program to illustrate file handling
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("names.txt");
	fout << "hello";
}
