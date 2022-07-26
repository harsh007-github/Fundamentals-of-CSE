#include<stdio.h>

	int main()
{
	int a;	//Do_while
	printf("Enter an integer: ");
	scanf("%d",&a);
	do
{	printf("%d\n",a);
	a--;
}	while(a>9);
		
	return 0;




	int a; 	//While
	printf("Enter the value:");
	scanf("%d",&a);
	while(a<=900)
	{
	printf("%d\n",a);	
	a++;


	}
	
	return 0;


	int a;	//For
	printf("Enter value of A:");
	scanf("%d",&a);
	for(a;a<90;a++)
	{
	printf("%d\n",a);
	}
	
	return 0;


	
	int a,i=2;	//Odd numbers from 1 to 20 
	for(a=1;a<=20;a++)
	{
	if(a==i)
	{
	i=(i+2);
	continue;
	}
	printf("%d\n",a);
	}
	return 0;



}