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
/*Note-Since the file is in append mode so if you run the same code twice the data will be concatenated after  each other*/

//fputs()

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

	FILE *fp;
	char enter[100];
	fp=fopen("Harsh.txt","w");
	if(fp==NULL)
	{
	printf("File not opened Successfully");
	}
	else
	{
	printf("Enter the string:");
	gets(enter);
	fputs(enter,fp);
	printf("Data entered successfully");
	fclose(fp);	
	}
	return 0;
}

//fprintf()

#include<stdio.h>
int main()
{
	FILE *fp;
	char name[30];
	int age;
	char gender[10];
	fp=fopen("Harsh.txt","w");
	if(fp==NULL)
	{
	printf("File failed to open");
	}
	else
	{
	printf("Enter your name,age and gender:");
	scanf(("%s%d%s"),name,&age,gender);
	fprintf(fp,"%s %d %s",name,age,gender);
	printf("Data written successfully");
	fclose(fp);
	}
	return 0;
}
