#include<stdio.h>
#include<math.h>

int input(){
    int p;
    do {
        printf("Enter the Position (>=1) in FIbanacci sequence = ");
        scanf("%d",&p);
    }while (p<=0);
    return p;
}

double fibo(int p){
    int i,value=1,f2=1,f1=1;
    for(i=3; i<=p; i++){
        value = f1 + f2 ;
        f1=f2;
        f2 =value;
    }
    return value;
}

int main(){
    int p;
    do{
        p = input();
    }   while (p<=0);
    printf("Value at %dth position = %lf ",p, fibo(p));
    getchar();
    return 0;
}