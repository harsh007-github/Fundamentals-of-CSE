//Creating a .txt file using fopen() using reading("r") and writing("w") attributes

#include<stdio.h>

#include<conio.h>

int main() {
        FILE * Fpointer; //Pointer to the file
        Fpointer = fopen("file_name", "mode");
        if (Fpointer == NULL) {
                printf("Unable to open file");
        } else {
                printf("File opened Successfully");
        }
        return 0;
}

//Entering text in a file using putc()

#include<stdio.h>

#include<conio.h>

#include<string.h>

int main() {
        FILE * Fpointer; //Pointer to the file
        Fpointer = fopen("Harsh.txt", "a");
        char data[100] = "Hello there fellow programmer";
        int i;
        int length = strlen(data);
        if (Fpointer == NULL) {
                printf("Unable to open file");
        } else {
                for (i = 0; i < length; i++) {
                        fputc(data[i], Fpointer);
                }
                printf("File opened Successfully");
        }
        return 0;
}
/*Note-Since the file is in append mode so if you run the same code twice the data will be concatenated after  each other*/

//fputs()

#include<stdio.h>

#include<conio.h>

#include<string.h>

int main() {

        FILE * fp;
        char enter[100];
        fp = fopen("Harsh.txt", "w");
        if (fp == NULL) {
                printf("File not opened Successfully");
        } else {
                printf("Enter the string:");
                gets(enter);
                fputs(enter, fp);
                printf("Data entered successfully");
                fclose(fp);
        }
        return 0;
}

//fprintf()

#include<stdio.h>

int main() {
        FILE * fp;
        char name[30];
        int age;
        char gender[10];
        fp = fopen("Harsh.txt", "w");
        if (fp == NULL) {
                printf("File failed to open");
        } else {
                printf("Enter your name,age and gender:");
                scanf(("%s%d%s"), name, & age, gender);
                fprintf(fp, "%s %d %s", name, age, gender);
                printf("Data written successfully");
                fclose(fp);
        }
        return 0;
}

//fgetc()

#include<stdio.h>

int main() {
        FILE * fp;
        char ch;
        fp = fopen("Harsh.txt", "r");
        if (fp == NULL) {
                printf("File not opened successfully");
        } else {
                while (!feof(fp)) {
                        char ch = fgetc(fp);
                        printf("%c", ch);
                }
        }

        return 0;
}


//Reading inputs using fscanf()

#include<stdio.h>
int main()
{
	FILE *fp;
	char name[15];
	int age;
	char gender[10];
	fp=fopen("Harsh.txt","r");
	if(fp==NULL)
	{
	printf("File not opened successfully");
	}
	else
	{
	  fscanf(fp,"%s%d%s",name,&age,gender);
	  printf("%s %d %s",name,age,gender);
	  fclose(fp);
	}



	return 0;
}


//Reading input usnig fgets()

#include<stdio.h>

#include<conio.h>

#include<string.h>

int main() {
        FILE * fp;
        fp = fopen("Harsh.txt", "r");
        char data[100];
        int i;
        if (fp == NULL) {
                printf("File not opened");
        } else {
                while (!feof(fp)) {
                        fgets(data, 100, fp);
                        printf("The characters readed were:%s", data);
                }
                printf("\nData readed Succesfully");
        }

}

//Renaming files using rename()

#include<stdio.h>

int main() {
        if (rename("Harsh.txt", "Harshnew.txt") == 0) {
                printf("File renamed successfully");
        } else {
                printf("Unable to rename file");
        }
        return 0;
}
/*Note:-Rename returns 0 if file is renamed successfully else it returns non zero value and if file does't exists else part will execute*/


//Deleting a file using remove()

#include<stdio.h>
int main()
{
	int status;
	status=remove("a.exe");	//remove() returns 0 if file is deleted else it returns non zero value
	if(status==0)
	{
		printf("File Deleted Successfully");
	}
	else
	{
		printf("Unable to delete file");
	}
	
}

//Deleting a file which is present in some folder using remove()

#include<stdio.h>
int main()
{
	int status;
	status=remove("Hello/Harsh.txt");
	if(status==0)
	{
		printf("File deleted successfully");
	}
	else
	{
		printf("Unable to delete file");
	}
}

//ferror() & clearerr() added
#include<stdio.h>
int main()
{
	char arr[25]="Hello there visitor";
	int status;
	FILE* fp;
	fp=fopen("Harsh.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open File");
	}
	else
	{
		printf("File opened successfully\n");
		fprintf(fp,"%s",arr);
		status=ferror(fp);
		printf("%d\n",status);
		clearerr(fp);
		status=ferror(fp);
		printf("%d\n",status);
		if(status==0)
		{
			printf("No read or write error produced");
		}
		else
		{
			printf("Read or write error has ocurred");
		}
	}
}

// Working of rewind(File Pointer)
#include<stdio.h>

int main() {
        FILE * fp;
        fp = fopen("Harsh.txt", "r");
        while (!feof(fp)) {
                putchar(fgetc(fp));
        }

        printf("\n");
        rewind(fp);
        while (!feof(fp)) {
                putchar(fgetc(fp));
        }

        return 0;
        
}

