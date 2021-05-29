#include<stdio.h>

int input(){
    int n;
    do {
        printf("Enter a positive interger = ");
        scanf("%d",&n);
    } while (n<=0);
    return n;
}

double factotial(int n){
    int i;
    double value=1;
    for (i=2; i<=n; i++) value=value*i;
    return value;
}


int main(){
    int n;
    do {  
        n = input();
    } while(n <=0);
    printf("The %d! factorial = %lf", n, factotial(n));
    getchar();
    return 0;
}