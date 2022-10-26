#include <stdio.h>
int main ()
{
	int a,b;		//If Else,Else if
	printf("Enter values of a,b:");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("A is greater than B ");
	
	else if (a<b)
	 printf("A is less than b ");
	
	else if (a=b)
	printf("A is equal to B ");


	return 0;


	
	int a,b;	//Nested if
	printf("Enter the value of a&b:");
	scanf("%d%d",&a,&b);
	if(a>b){
	if(a>20)
	printf("A>B,A>20");
	}
	else if (a<b)
	printf("A is less than B");

	return 0;



	int a,b;	//Switch
	printf("Enter your values here:");
	scanf("%d%d",&a,&b);
	switch(a+b)
                  {
	case 7: printf("Sum is equal to 7");
	break;
	case 9: printf("Sum is equals to 9 ");
	break;
	default: printf("Sum is neither 7 nor 9");
	break;
	}
	return 0;




	




}




	
