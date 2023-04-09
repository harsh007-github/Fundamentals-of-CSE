// Basic Program to illustrate file handling
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("names.txt");
	fout << "hello";
}

// Insert data in file and read it
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("touch.txt");
	fout << "Hello there this text will be stored inside the file";
	fout.close();

	ifstream fin;
	fin.open("touch.txt");

	// Read the contents of the file into a string variable
	string contents;
	getline(fin, contents);

	// Print the contents to the console
	cout << contents << endl;

	fin.close();
}
