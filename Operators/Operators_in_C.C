		//Operators in C and their working

 #include<stdio.h>
   int main()
{

		//I.Arithmetic Operators 

          //1. Addition{or Unary Plus(+)}                    
	
	int a,b,c;       
	a=35;
	b=37;
	c=a+b;
	printf("c=%d",c); 

	return 0;

           //2.Subtraction{or Unary Minus(-)}

	int a,b,c,d;    	
	a=983;
	b=789;
	c=6598;
	d=a-b+c;
	printf("d=%d",d);

	return 0;


           //3.Division{/}
			
	int a,b,c,d;     
	a=12,b=34,c=17,d=a+b/c;
	printf("d=%d",d);

	return 0;


               //4.Multiplication{*}
			
	int a,b,c,d;     
	a=12,b=34,c=17,d=a+b*c;
	printf("d=%d",d);

	return 0;


              //5.Division with remainder{or Modulus(%)}			
		
	int a,b,c;     
	a=35,b=34,c=a/b;
	printf("c = %d\n",c);
	printf("a%%b = %d",c);

	return 0;

    
		//II.Increment&Decrement Operators

               //1.Postfix Increment{++}
	
	int a=5; 
	printf("%d\n",a++);
	printf("a++ = %d",a);

	return 0;

               //2.Prefix Increment{++}
	 
                 int a=7;
	printf("++a = %d",++a);

	return 0;

               //3.Postfix Decrement{--}
	
	int a=79;.
	printf("%d\n",a--);
	printf("a-- = %d",a);

	return 0;

               //4.Prefix Decrement{--}

	int a=56;
	printf("%d",--a);
	
	return 0;

		//III.Relational Operators
	
	//1.Equal To{==}
	
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a==b);

	return 0;


	//2.Not Equal To{!=}

	int a,b;      
	scanf("%d%d",&a,&b);
	printf("%d",a!=b);

	return 0;

	//3.Less Than{<}

	int a=6.69999,b=6.7;//Less_than
	printf("%d",a<b);

	return 0;

	//4.Greater Than{>}

	float a=67.9899,b=67.799;
	printf("%d",a>b);

	return 0;


	//5.Less than or equal to{<=}

	float a=478.90,b=789.085;
	printf("%d",a<=b);

	return 0;


	//6.Greater than or equal to{>=}

	float a=9.298,b=9.27;
	printf("%d",a>=b);

	return 0;
	

		//IV.Logical Operators
	
	//1.Logical AND{&&}

	int a=99,b=98,c=(a>=b) && (b==a);
	printf("%d",c);

	return 0;
  
	//2.Logical OR{||}

	int a=1,b=89,c=(a>=b) || (++a);
	printf("%d\n",c);
	printf("%d",a);

	return 0;

	//3.Logical NOT
	
	float a=7.999,b=8,c=!(b!=a);//Not_operator
	printf("%d",c);

	return 0;


		//V.Bitwise Operators

	//1.Bitwise AND{&}

	int a=32,b=33,c=a&b;
	printf("%d",c);

	return 0;


	//2.Bitwise NOT{~}

	int a=7;
	printf("%d",~a);

	return 0;

	//3.Bitwise Left Shift{<<}

	int a=7;
	printf("%d",a<<8);

	return 0;

	//4.Bitwise Right Shift{>>}

	int a=7,b=(a>>1);
	printf("%d",b);

	return 0;
	
	//5.Bitwise XOR{^}
 
	int a=13,b=15,c=(a^b);
	printf("%d",c);

	return 0;
	
	//6.Bitwise OR{|}

	int a=7,b=4,c=(a | b);
	printf("%d",c);

	return 0;

		//VI.Assignment Operators

	//1.Add AND assignment{+=}

	int a=7,b=(a+=7984456);
	printf("%d",b);

	return 0;

	//2.Subtract AND assignment{-=} 

	int a=798,b=(a-=697);
	printf("%d",a);

	return 0;

	//3.Multiply AND assignment{*=}
	
	int a=55,b=(a*=45);
	printf("%d",b);

	return 0;


	//4.Divide AND assignment{/=}

	int a=76,b=(a/=15);
	printf("%d",b);

	return 0;


	//5.Modulus AND assignment {%=}

	int a=78,b=5,c=(a%=b);
	printf("a%%b=%d",c);

	return 0;

	//6.Left shift AND assignment{<<=}

	int a=7,b=(a<<=2);
	printf("%d",b);

	return 0;

	//7.Right shift AND assignment{>>=}

	int a=19,b=(a>>=2);
	printf("%d",b);

	return 0;


	//8.Bitwise AND Assignment{&=}

	int a=9,b=99,c=(a&=b);
	printf("%d",c);

	return 0;


	//9.Bitwise OR Assignment{|=}
	
	int a=9,b=7,c=(a|=b);
	printf("%d",c);

	return 0;


	//10.Bitwise XOR Assignment{^=}
	
	int a=9,b=7,c=(a^=b);
	printf("%d",c);

	return 0;


		//VII.Other Operators
	
	//Conditional Operator

	int A=8,B=6,res= A>B ? A:B;
	printf("%d",res);

	return 0;

	//SizeOf Operator

	int a;
	printf("%d",sizeof (a));
	return 0;

  	//Derefence Operator

	int b=89;  
	printf("%d",*&b);

	return 0;
	
	//Address Operator

	int b=973;   
	printf("%d",&b);

	return 0;
	




}
