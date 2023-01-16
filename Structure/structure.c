//Basic program to illustrate Structure in C
#include<stdio.h>

struct student
{
	char name[30];
	int roll_no;
};

int main()
{
	struct student s = {"Harsh Khandelwal" , 36};
	printf(s.name); 			//Prints name
	printf("\n%d" , s.roll_no);	// Prints roll number
	return 0;
}


//Taking inputs from user by creating a separate function
#include<stdio.h>

struct student
{
	char name[30];
	int roll_no;
};

struct student input()
{
	struct student s;
	printf("Enter Student Name :");
	scanf("%s" , s.name);
	printf("\nEnter Student Roll No:");
	scanf("%d" , &s.roll_no);
	return s;
}

void display(struct student s2)
{
	printf("%s %d" , s2.name , s2.roll_no);
} 

int main()
{
	struct student s1;
	s1 = input();
	display(s1);
}