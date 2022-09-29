//Creating a .txt file using fopen() using reading("r") and writing("w") attributes.
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *Fpointer;	//Pointer to the file
	Fpointer=fopen("file_name","mode");
	if(Fpointer==NULL)
	{
	printf("Unable to open file");
	}
	else
	{
	printf("File opened Successfully");
	}
	return 0;
}
