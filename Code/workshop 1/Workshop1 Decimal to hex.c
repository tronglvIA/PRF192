#include<stdio.h>

int main(){
	int i,n;
	char a[100];
	printf("Please enter the number that you wanna convert N = ");
	scanf("%d", &n);
	
	for (i=0; n>0; i++){
		if (n%16<=9) {
			a[i]=n%16;	
		} else if (n%16==10){
			a[i]='A';
		}else if (n%16==11){
			a[i]='B';
		}else if (n%16==12){
			a[i]='C';
		}else if (n%16==13){
			a[i]='D';
		}else if (n%16==14){
			a[i]='E';
		}else if (n%16==15){
			a[i]='F';
		}
		n=n/16;
	}
	
	printf("\nthe number after covert to binary = ");
	for (i=i-1; i>=0; i--){
		printf("%c%d",a[i]);	
	}
	getch();
}
