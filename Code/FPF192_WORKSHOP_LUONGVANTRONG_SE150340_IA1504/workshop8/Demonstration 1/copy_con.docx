/*Write a C-program that will use command line to perform 
writing a text file from characters inputted by user until 
the keys Ctrl+Z then ENTER are pressed.*/

/*copy-con.c*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
/*Check whether the file existed or not*/
int exist (char* filename)
{
	int existed= FALSE;
	/*Try opening it for reading*/
	FILE* f=fopen(filename, "r");
	if (f != NULL)
	{
		existed= TRUE;
		fclose(f);
	}
	return existed;
}
/*write a file from character inputted until Ctrl+Z is pressed*/
int writeFile(char* filename)
{
	char c; /*inputted character*/
	int CTRL_Z= -1;
	if (exist (filename)== TRUE)
	{
		printf("The File %s existed. Override it Y/N? :", filename);
		if (toupper (getchar())== 'N') return FALSE;
	}
	/*open the file for writing*/
	FILE* f= fopen(filename, "w");
	fflush(stdin); /*Clear input buffer*/
	do
	{
		c= getchar(); /*get a character*/
		if (c != CTRL_Z) fputc (c,f); /*write it to file*/
	}
	while (c != CTRL_Z);
	fclose(f);
	return TRUE;
}

// int printFile (char* filename)
// {
// 	char c; /*inputted character*/
// 	if (exist (filename)== FALSE)
// 	{
// 		printf ("The file %s does not exist.\n", filename);
// 		return FALSE;
// 	}
// 	/*open the file for reading*/
// 	FILE* f= fopen (filename, "r");
// 	/*when date can be read from the file to variable, process vartable*/
// 	while ((c= fgetc(f))!= EOF) putchar(c);
// 	fclose(f);
// 	return TRUE;
// }

int main(int argCount, char* args[])
{
	char filename;
	printf ("Proram for writing then reading a file\n");
	printf ("Enter a filename:");
	gets(filename);
	if (argCount != 2) 
		printf ("Syntax: copy_con filename\n");
	else if (writeFile (args[1])== TRUE)
			printf("Writing the file %s: done\n", args[1]);
		else 
			printf("Can not Write the file %s\n", args[1]);
	return 0;		
}
