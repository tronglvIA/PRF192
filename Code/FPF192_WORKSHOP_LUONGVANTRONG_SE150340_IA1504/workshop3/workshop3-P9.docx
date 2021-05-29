#include<stdio.h>

//algorithm euclid: GCD(A,B)=GCD(B,A%B)- the algorithm will recursion until A%B=0
int gcd(int num1, int num2){
    if (num2 == 0) return num1;
    else return gcd(num2, num1%num2);
}

// lcm(a,b) = (a*b)/gcd(a,b) .
int lcm(int num1, int num2){
    int lcm;
    lcm = (num1*num2)/gcd(num1,num2);
    return lcm;
}

int main(){
    int num1, num2;
    do {
        printf("Input Number 1 = ");
        scanf("%d", &num1);
        printf("Input the number 2 = ");
        scanf("%d",&num2);
    } while (num1<0 && num2 <0);
    printf("\tThe result GCD(%d,%d) = %d \n", num1, num2, gcd(num1,num2));
    printf("\tThe result LCM(%d,%d) = %d \n", num1, num2, lcm(num1,num2));
    getchar();
    return 0;
}