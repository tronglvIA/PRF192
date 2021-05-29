#include<stdio.h>
#include<math.h>

// function input 
int input(){
    int n;
    do {
        printf("Input the integer number (>2) = ");
        scanf("%d",&n);
    } while (n<2);
    return n;
}


// check prime
int check_prime(int value){
    int result, i, count=0;
    for (i=2; i<= sqrt(value); i++){
        if (value % i ==0) count++;
    }
    if (count==0) result=1; else result =0;
    return result;
}



int main(){
    int num, i;
    do {
        num = input();
    } while (num <2 );
    for (i=2; i<num; i++){
        if (check_prime(i)==1) printf("%d ", i);
    }
    getchar();
    return 0;
}