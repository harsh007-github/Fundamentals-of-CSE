#include<stdio.h>
int main(){

	// 1D Array of 5 Integers

	int arr[5]={1,2,3,4,5};
	printf("%d",arr[4]);
	return 0;
	//Output-5
		
	//To reverse elements of an array 

	//In Original order 
	int a[9]={0,1,2,3,4,5,6,7,8};
	int i;
	for(i=0;i<9;i++){
	printf("%d",a[i]);
}
	printf("\n");
	//In reverse order 
	for(i=8;i>=0;i--){
	printf("%d",a[i]);
}
	return 0;

	//Output-012345678
             	               876543210
	

	//Count array elements using sizeof Operator

	int arr[200]={1,2,3,4,5};
	int b;
	b=sizeof(arr)/sizeof(arr[0]);
	printf("%d",b);
	return 0;
	
	//Output-200
	
	//2D-Array
	
	int arr[2][3]={{3,4,5},{5,4,3}};
	int r;
	int c;
	for(r=0;r<2;r++){
	for(c=0;c<3;c++){
	printf("%d\t",arr[r][c]);
}
}
	return 0;
	
	//Output-3 4 5 5 4 3


	//3D Array
	int arr[2][2][3]={{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
	int r;
	int c;
	int j;
	for(j=0;j<2;j++)
{
	for(r=0;r<2;r++){
	for(c=0;c<3;c++){
	printf("%d\t",arr[j][r][c]);	
}
}
}	return 0;
	//Output-1 2 3 4 5 6 7 8 9 10 11 12


	//Addition/Subtraction b/w elements of array

	int arr[2][2][3]={{{35,65,72},{45,658,96}},{{87,788,989},{100,1123,1225}}};
	int r;
	int c;
	int j;
	printf("%d\n",(arr[0][0][1])-(arr[0][0][0]));	
	return 0;

	//Output-30

	//Constant Array

	 const int arr[]={4,5,6,7,8,9};
	arr[1]=77;
	printf("%d",arr[1]);
	return 0;

	//Output:-Error

	//Variable length array To reverse  given array
	int n;
	printf("Enter the Number of elements to be reversed:");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("Enter your elements:");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	
}
	for(i=n-1;i>=0;i--){
	printf("%d\t",a[i]);
}	
	return 0;

	//Output-Reverse of the array user inputs.



	return 0;
}

	//Arrays as Function Argument

	int sumofarray(int A[],int size)
{
	int i;
	int sum=0;
	for(i=0;i<size;i++)
	{
	sum+=A[i];
	}
	return sum;
}

int main()
	{	
	int A[]={1,2,3,4,5};
	int size=sizeof (A)/sizeof (A[0]);
	int SumOF=sumofarray(A,size);
	printf("Sum Of Elements:%d\n",SumOF);
	printf("%d",sizeof A);
	return 0;

}


		//To Print Twice of Array Elements


int doubleOf(int A[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	A[i]=2*A[i];
	}
}

int main()
	{	
	int A[]={1,2,3,4,5};
	int c;
	int size=sizeof (A)/sizeof (A[0]);
	doubleOf(A,size);
	for(c=0;c<size;c++){
	printf("%d\n",A[c]);
	}
	
	return 0;

}

