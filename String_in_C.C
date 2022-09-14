#include<stdio.h>

int main() { //Basic String of 5 cahracter
        int str[6] = "Harsh";
        printf("%s", str);

        return 0;
}

//Transferring elements from one string to another
char s[] = "Harsh";
char t[6];
int i;
for (i = 0; s[i] != '\0'; i++) {
        t[i] = s[i];
}
t[i] = '\0';
printf("%s", t);
return 0;

//Printing only a particular part of the string
{
        char str[] = "Hello there visitors";
        printf("%.8s", str);
        return 0;
}

//Printing a string using puts()
{
        char str[] = "Hello there visitors";
        puts(str);
        return 0;
}

{ //Reading string using gets() and scanf()
        char str[5];
        printf("Enter the String:");
        gets(str);
        //scanf("%s",str);
        printf("The entered string is:- %s\n", str);
        return 0;
}
//Note:-Uncomment gets or scanf to get the desired output


//Printing Alphabets and digits using putchar()
#include<stdio.h>

int main() { 
	
        int ch;
        for (ch = 'A'; ch <= 'Z'; ch++) {
                printf("\n");
                putchar(ch);
        }

        for (ch = '0'; ch <= '9'; ch++) {
                printf("\t");
                putchar(ch);
        }
        return 0;
}


//Copying one string into another using strcpy

//Note:-Make sure to include string.h library
int main() {


        char str[25] = "Hello there";
        char str1[25];
        printf("%s\n", strcpy(str1, str));
        printf("%s", str1);
        return 0;
}

//chaining a series of strcpy calls

int main() {
        char str1[25] = "chaining of Strcpy";
        char str2[25];
        char str3[25];
        strcpy(str3, strcpy(str2, str1));
        printf("%s\n%s\n%s", str1, str2, str3);
        return 0;

        //Note:-Do not forget to include string.h library
}

//copying a string using strncpr

int main() {
        char str[6] = "Hello";
        char arr[5];
        strncpy(arr, str, sizeof(arr));
        printf("%s", arr);
        arr[sizeof(arr) - 1] = '\0'; //Adding null terminator
        return 0;
}

//Printing the length of string using strlen

#include<stdio.h>
#include<string.h>

int main() {
        char str[100] = "This is a String";
        printf("%d", strlen(str));
        return 0;
}
	/*Note:-Even though the size of the character array is 100		(100*1) but the iutput will be 16 as strlen() prints length 		of the string and not the array.*/

//Appending two strings using strcat()

#include<stdio.h>

#include<string.h>

int main() {
        char str[25], arr[25];
        strcpy(str, "This text will be ");
        strcpy(arr, "combined with this.");
        strcat(str, arr); //strcat will concatenate str & arr
        printf("%s", str);
        return 0;
}

//Concatenating two strings using strncat()

#include<stdio.h>

#include<string.h>
 
int main() {
        char str[5], arr[15];
        strcpy(str, "Hel");
        strcpy(arr, "lo");
        strncat(str, arr, sizeof(str) - strlen(str) - 1);
        printf("%s", str);
        return 0;

}

