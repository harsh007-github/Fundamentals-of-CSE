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