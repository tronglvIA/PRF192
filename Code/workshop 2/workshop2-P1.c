/*
Write a program that allows user inputting a simple expression containing one of four operators +, -, *, / then the result is printed out to the monitor. Input format:  num1 operator num2,
An example of user interface
Enter an expression (+ - * /): 4*5 
Result: 20
Author LUONG VAN TRONG
SE150340
IA1504
*/
#include <stdio.h>


int main()
{
	char op, check;
	int value=100;
	double num1, num2, result=0;
	printf("Enter the numbers you want\n");
	printf("Number 1 = ");
	scanf("%lf", &num1);
	printf("Number 2 = ");
	scanf("%lf",&num2);
//	scanf("%c", &check);
	printf("Operator = ");
	fflush(stdin);
	scanf("%c",&op);
	switch(op)
	{
		case '+':  
			result = num1 + num2;
			printf("Result = %lf", result);
			break;
		case '-':  
			result = num1 - num2;
			printf("Result = %lf", result);
			break;
		case '*':  
			result = num1 * num2;
			printf("Result = %lf", result);
			break;
		case '/':  
			if (num2 == 0){
					printf("the operator can't because devide = 0");
				} else{
					result = num1 / num2;
					printf("Result = %lf", result);
					break;
				}									
	}
	getchar();
	return 0;
}
