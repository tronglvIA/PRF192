#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "myTrim.c"
#define MAXN 50
int menu()
{  printf("\n1- Add a new employee");
   printf("\n2- Find data about empoyees using a name inputted");
   printf("\n3- Remove an employee based on a code inputted");
   printf("\n4- Print the list in descending order base on salary + allowances");
   printf("\nOther- Quit");
   printf("\nSelect:");
   int choice;
   scanf("%d",&choice);
   return choice;
}
int isFull(char codes[][8], char names[][20],double salaries[],double allowances[],int n)
{  return n==MAXN;
}
int isEmpty (char codes[][8], char names[][20],double salaries[],double allowances[],int n)
{  return n==0;
}
void add(char codes[][8], char names[][20],double salaries[],double allowances[],int*pn)
{  char s[MAXN];
   printf("Enter code:");
   fflush(stdin);
   gets(codes[*pn]);
   printf("Enter name:");
   fflush(stdin);
   scanf("%20[^\n]",s);
   nameStr(s);
   strcpy(names[*pn], s);
   printf("Enter salary:");
   scanf("%lf",&salaries[*pn]);
   printf("Enter allowance:");
   scanf("%lf",&allowances[*pn]);
   (*pn)++;
}
void printBasedName(char codes[][8],char names[][20],double salaries[],double allowances[],int *pn)
{  int i, count=0;
   printf("Searching for:");
   char s[MAXN];
   fflush(stdin);
   scanf("%20[^\n]",s);
   nameStr(s);
   for(i=0;i<*pn;i++)
   {  if(strcmp(s,names[i])==0)
      {  printf("Employee:%d\n",i+1);
         printf("Code:%s\n",codes[i]);
         printf("Name:%s\n",names[i]);
         printf("Salary:%0.2lf\n",salaries[i]);
         printf("Allowance:%0.2lf\n",allowances[i]);
         count++;
      }
   }
   if(count==0) printf("Not found\n");
}
int findCode(char code[],char codes[][8],int n)
{  int i=0;
   for(i=0;i<n;i++)
   {  if(strcmp(code,codes[i])==0)
      {  return i;
	  }
   }
   return -1;
}
/*int search(char s[],char names[][20],int n)
{  for(int i=0;i<n;i++)
   {  if(strcmp(s,name[i])==0) return i;
   }
   return -1;
}*/
int removeName(int pos, char codes[][8],char names[][20],double salaries[],double allowances[],int *pn)
{  if(pos<0 || pos>=*pn) return 0;
   int i;
   for(i=pos; i<*pn-1; i++) 
   {  strcpy(names[i],names[i+1]);
      strcpy(codes[i],codes[i+1]);
      salaries[i]=salaries[i+1];
      allowances[i]=allowances[i+1];
   }
   (*pn)--; 
   return 1; 
}
void swapString(char*a,char*b)
{  char t[MAXN];
   strcpy(t,a);
   strcpy(a,b);
   strcpy(b,t);
}
void swapNumber(double*a,double*b)
{  double t=*a;
   *a=*b;
   *b=t;
}
void sort(char codes[][8],char names[][20],double salaries[],double allowances[],int n)
{  int i,j;
   for(i=0;i<n-1;i++)
   {  for(j=n-1;j>i;j--)
      if((salaries[j]+allowances[j])<(salaries[j-1]+allowances[j-1]))  
	  {  swapString(codes[j],codes[j-1]);
	     swapString(names[j],names[j-1]);
	     swapNumber(&salaries[j],&salaries[j-1]);
	     swapNumber(&allowances[j],&allowances[j-1]);
      }
   }
}
void print(char codes[][8], char names[][20], double salaries[],double allowances[], int *pn)
{  for(int i=0;i<*pn;i++)
   {  printf("Employee:%d\n",i+1);
      printf("Code:%s\n",codes[i]);
      printf("Name:%s\n",names[i]);
      printf("Salary:%0.2lf\n",salaries[i]);
      printf("Allowance:%0.2lf\n",allowances[i]);
   }
}
int main()
{  int n=0; 
   char codes[MAXN][8],names[MAXN][20];
   double salaries[MAXN], allowances[MAXN];
   char code[MAXN]; 
   int userChoice;
   do
   {  userChoice=menu();
      switch(userChoice)
      {  case 1: if (isFull(codes,names,salaries,allowances,n)) printf("\nSorry! The list is full.\n");
                 else add(codes,names,salaries,allowances,&n);
                 printf("Added\n");
				 break;
		 case 2: if(isEmpty(codes,names,salaries,allowances,n)) printf("\nSorry! The list is empty.\n");
		         else printBasedName(codes,names,salaries,allowances,&n);
				 break;	
		 case 3: if(isEmpty(codes,names,salaries,allowances,n)) printf("\nSorry! The list is empty.\n");
		         else
		         {  printf("Input the remove code:");
		            fflush(stdin);
		            scanf("%8[^\n]",code);
		            int pos=findCode(code,codes,n);
		            if(pos<0) printf("Not found!\n");
		            else 
		            {  removeName(pos,codes,names,salaries,allowances,&n);
		               printf("Removed!\n");
					}
				 }
				 break;	 
		 case 4: if(isEmpty(codes,names,salaries,allowances,n)) printf("\nSorry! The list is empty.\n");
		         else 
		         {  sort(codes,names,salaries,allowances,n);
		            print(codes,names,salaries,allowances,&n);
				 }
				 break;
		 default: printf("\nGoodbye.\n");
	  }
   }
   while (userChoice>0 && userChoice<5);
   fflush(stdin);
   getchar();
   return 0;
}

