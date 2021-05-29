#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int getValue(int min, int max){
    int status, value;
    bool correct=false;
    char after;
    do{
        if 
        printf("Input a value in range [%d,%d] = ",min,max);
        status = scanf("%d%c",&value,&after);
        if (status==0){
            printf("The data type was failed\n");
        } else if (after!= '\n'){
            printf("Trailing character!\n");
        } else if (value <min || value >max){
            printf("Out of the range!\n");
        } else correct =true;    
    } while (correct==false);
    return value;
}

int Square(int n){
    return n*n;
}

int main(){
    int s,n;
    n=getValue(2,10);
    s= Square(n);
    printf("%d ^2 = %d\n",n,s);
    getchar();
    return 0;
}