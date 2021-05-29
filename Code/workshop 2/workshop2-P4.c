/*
Write a C program that will carry out some times: accept two integers, swap these values, print them out to the monitor. 
The program will terminate when the value of 0 is inputted
*/

#include <stdio.h>

int main (){
	int a,b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	if (a !=0 && b!=0){
		a = a+b;
		b = a-b;
		a = a-b;
		printf("After swap a= %d,  b= %d ", a, b);
	}
	getchar();
	return 0;
}
