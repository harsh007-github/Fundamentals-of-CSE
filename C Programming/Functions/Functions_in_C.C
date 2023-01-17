#include<stdio.h>
	//Function to divide two integers
int division(int , int);
int main()
{	
	int p,q,div;
	printf("Enter the Values:");
	scanf("%d%d",&p,&q);
	div=division(p,q);
	printf("Here's the output:%d",div);
}
	int division(int a, int b)
	{
	return(a/b);	
	}

	//Function to multiply two numbers
int product(int,int);
	int main()
{	
	int p,q,multi;
	printf("Enter Values for p,q:");
	scanf("%d%d",&p,&q);
	multi=product(p,q);
	printf("%d",multi);
}
	int product(int a,int b)
{
	
	return (a*b);


}



