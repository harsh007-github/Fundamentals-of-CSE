#include<stdio.h>
int main()
	//Pointer Basics
{
	int a=5;				//variable declaration
	int *p;			
	p=&a;
	printf("Address of A:%d\n",p);		
	printf("Address of P:%d\n",&p);		
	printf("Value Stored at A:%d",*p);		
	return 0;

	/*Output-	Address of A:6487580(Address will be different in your machine)
		Address of P:6487568(Address will be different in your machine)
		Value Stored at A:5*/


}
	//Pointer Arithmetic

	int a=10;
	int *b;
	b=&a;
	printf("%d\n",b);
	printf("%d",b+1);	//Incrementing 'b'
	return 0;

	/*Output- 	6487572(Address will be different in your machine)
		6487576 (Address will be different in your machine)*/


	
	//Pointer to pointer 
	int a = 1025;	
	int *p;
	p=&a;
	int **q;		//'q'-Pointer to pointer 'p'
	q=&p;
	printf("%d\n",**q);
	printf("%d\n",&p);
	int ***r;		//'r'-Pointer to pointer 'q'
	r=&q;
	printf("%d\n",***r);
	printf("%d",&q);
	return 0;

	/*Output-  1025
		6487560(Address will be different in your machine)
		1025
		6487552(Address will be different in your machine)*/
		



		//Pointer as Function Arguments
#include<stdio.h>

	//Function "Inc"
	int inc(int *ptr)
{
	*ptr = (*ptr)+1;	
}
int main()
{
	int  a=15;
	inc(&a); 	//Calling 'Inc' funciton
	printf("%d",a);
	return 0;
	}

	//Output-16


	//Pointer and Arrays

	int a[3]={38,78,83};
	int b;
	for(b=0;b<3;b++){

	printf("%d\n",a[b]);
	printf("%d\n",&(a[b]));

	}

	return 0;

	}

/*Output(Note:Variable adress can be different in your device):
	38
	6487568
	78
	6487572
	83
	6487576		*/



	//To Print Twice of Array Elements

	int doubleOf(int *A,int size)
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


	


