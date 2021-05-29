// printf out the fist prime of n is accpeted by users
#include<stdio.h>

// check if n is prime result = 1 else result =0
int isprime(int n){
    int result=1, i;
    for (i=2; i*i<=n && result==1;i++){
        if (n%i==0) result = 0 ;
    }
    return result;
}

// printf out the monitor the prime numbers

void print_n_prime(int n){
    int count = 0, value =2;
    while (count < n){
        if (isprime(value)==1){
            printf("%d ", value);
            count+=1;
        }
        value+=1;
    }
}

int main(){
    int n;
    printf("Input the interger number = ");
    scanf("%d",&n);
    print_n_prime(n);
    getchar();
    return 0; 
}
