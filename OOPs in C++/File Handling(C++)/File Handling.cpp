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

//Program to read from the file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    //Opens the file
    fin.open("touch.txt");
    char ch;
    //Runs until end of file isn't reached and prints all the content of file
    while (!fin.eof())
    {
        cout << ch;
        fin >> ch;
    }
    //Closes the file
    fin.close();
}
