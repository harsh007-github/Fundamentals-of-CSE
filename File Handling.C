//Creating a .txt file using fopen() using reading("r") and writing("w") attributes

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

//Entering text in a file using putc()

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *Fpointer;	//Pointer to the file
	Fpointer=fopen("Harsh.txt","a");
	char data[100]="Hello there fellow programmer";
	int i;
	int length=strlen(data);
	if(Fpointer==NULL)
	{
	printf("Unable to open file");
	}
	else
	{
	for(i=0;i<length;i++)
	{
	 fputc(data[i],Fpointer);
	}
	printf("File opened Successfully");
	}
	return 0;
}
