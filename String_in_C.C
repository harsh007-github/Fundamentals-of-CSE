#include<stdio.h>
int main ()
{
	int str[5]="Harsh";
	printf("%s",str);	


return 0;
}
//Transferring elements from one string to another
char s[]="Harsh";
	char t[2];
	int i;
	for(i=0;s[i]!='\0';i++)
	{
	t[i]=s[i];
	}
	t[i]='\0';
	printf("%s",t);
	return 0;
