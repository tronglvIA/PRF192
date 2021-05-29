/*Write a C program that will print out sum of integers inputted 
from the keyboard until  the value 0 is inputted.*/

#include<stdio.h>

int main (){
	int i,x,sum=0;
	do{
		printf("x = ");
		scanf("%d", &x);
		if (x!=0) sum=sum+x;	
	}
	while (x!=0); 
	printf("sum = %d",sum );
	getchar();
	return 0;
}
