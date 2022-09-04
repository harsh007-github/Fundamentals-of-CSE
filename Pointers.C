#include<stdio.h>

int main()
//Pointer Basics

{
        int a = 5; //variable declaration
        int * p;
        p = & a;
        printf("Address of A:%d\n", p);
        printf("Address of P:%d\n", & p);
        printf("Value Stored at A:%d", * p);
        return 0;

        /*Output-	Address of A:6487580(Address will be different in your machine)
        	Address of P:6487568(Address will be different in your machine)
        	Value Stored at A:5*/

}
//Pointer Arithmetic

int a = 10;
int * b;
b = & a;
printf("%d\n", b);
printf("%d", b + 1); //Incrementing 'b'
return 0;

/*Output- 	6487572(Address will be different in your machine)
	6487576 (Address will be different in your machine)*/

//Pointer to pointer

int a = 1025;
int * p;
p = & a;
int ** q; //'q'-Pointer to pointer 'p'
q = & p;
printf("%d\n", ** q);
printf("%d\n", & p);
int ** * r; //'r'-Pointer to pointer 'q'
r = & q;
printf("%d\n", ** * r);
printf("%d", & q);
return 0;

/*Output-  1025
	6487560(Address will be different in your machine)
	1025
	6487552(Address will be different in your machine)*/

//Pointer as Function Arguments

#include<stdio.h>

//Function "Inc"
int inc(int * ptr) {
        * ptr = ( * ptr) + 1;
}
int main() {
        int a = 15;
        inc( & a); //Calling 'Inc' funciton
        printf("%d", a);
        return 0;
}

//Output-16

//Pointer and Arrays

{
        int a[4] = {
                38,
                78,
                83,
                0
        };
        int b;
        int d = 0;
        int * ptr = & a[b];
        while (a[b] != 0) {

                printf("%d\n", *(ptr + d));
                printf("%d\n", (ptr + d));
                b++;
                d++;
        }

        return 0;

}

/*Output(Note:Variable address can be different in your device):
	38
	6487568
	78
	6487572
	83
	6487576		*/

//To Print Twice of Array Elements

int doubleOf(int * A, int size) {
        int i;
        for (i = 0; i < size; i++) {
                A[i] = 2 * A[i];
        }
}

int main() {
        int A[] = {
                1,
                2,
                3,
                4,
                5
        };
        int c;
        int size = sizeof(A) / sizeof(A[0]);
        doubleOf(A, size);
        for (c = 0; c < size; c++) {
                printf("%d\n", A[c]);
        }

        return 0;

}

//Printing string using Pointers

void print(char * C) {
        int i = 0;
        while (C[i] != '\0') {
                printf("%c", C[i]);
                i++;
        }

}
int main() {
        char C[15] = "HELLO THERE";
        print(C);
        return 0;
}

//Dynamic memory Allocation using Malloc

#include<stdio.h>

#include<stdlib.h>

int main() {
        int * ptr;
        int n;
        int i;
        printf("Enter The Number Of Elements:");
        scanf("%d", & n);
        printf("Entered Number Of Elements:%d\n", n);
        ptr = (int * ) malloc(n * sizeof(int));
        if (ptr == NULL) {
                printf("Memory Not Allocated\n");
                exit(0);
        } else {
                for (i = 0; i < n; ++i) {
                        ptr[i] = i + 1;
                }
                printf("Elements are:\n");
                for (i = 0; i < n; i++) {
                        ptr[i] = i + 1;
                        printf("%d", ptr[i]);
                }

        }

        return 0;
}

//Dynamic memory Allocation using Calloc

#include<stdio.h>

#include<stdlib.h>

int main() {
        int * ptr;
        int n;
        int i;
        printf("Enter The Number Of Elements:");
        scanf("%d", & n);
        printf("Entered Number Of Elements:%d\n", n);
        ptr = (int * ) calloc(n, sizeof(int)); //Typecasting void to int
        for (i = 0; i < n; ++i) {
                ptr[i] = i + 1;
        }
        printf("Elements Of The Array are:");
        for (i = 0; i < n; i++) {
                ptr[i] = i + 1;
                printf("%d", ptr[i]);
        }

        return 0;
}



//Dynamic Memory Allocation using Realloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
       int n;
       int i;
       printf("Enter the Number of elements\n");
       scanf("%d", &n);
       int *A = (int*) malloc(n* sizeof(int));
       int *B = (int*) realloc(A, 2 *n* sizeof(int));
       for (i = 0; i < 4 * n; i++)
       {
              B[i] = i + 1;
       }
       for (i = 0; i < (2 *n); i++)
       {
              printf("%d\t", B[i]);
       }
       return 0;
}


	

//Pointers as Function Returns

		#include<stdio.h>

		#include<stdlib.h>

		int * add(int * a, int * b) {
		        int * r = (int * ) malloc(sizeof(int));
		        * r = ( * a) + ( * b);
		        return r;
		}
		int main() {
		        int a = 8, b = 7;
		        int * c = add( & a, & b);
		        printf("%d", * c);
		        return 0;
		}




//Pointer to Functions

	#include<stdio.h>

	int add(int a, int b) {
	        int c = a + b;
	        return c;
	}
	int main() {
	        int c;
	        int( * p)(int, int);
	        p = add;
	        c = add(23, 35);
	        printf("%d", c);

	}




//Sorting elements using Bubblesort

#include<stdio.h>

void bubblesort(int * A, int n) {
        int i, j, temp;
        for (i = 0; i < n; i++) {
                for (j = 0; j < n - 1; j++) {
                        if (A[j] > A[j + 1]) {
                                temp = A[j];
                                A[j] = A[j + 1];
                                A[j + 1] = temp;
                        }
                }
        }
}

int main() {
        int A[] = {
                5,
                4,
                6,
                7,
                8,
                9,
                1,
                3,
                2
        };
        int i;
        bubblesort(A, 9);
        for (i = 0; i < 9; i++) {
                printf("%d\t", A[i]);
        }

}

