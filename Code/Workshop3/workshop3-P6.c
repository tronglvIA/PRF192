#include<stdio.h>

int input_number(){
    int num;
    do {
        printf("Enter the number to check = ");
        scanf("%d",&num);
    } while (num<=0);
    return num;
}

int check_fibo(int number){
    int f1=1, f2=1, value=0, result=0;
    if (number == 1) result = 1;
    else {
    while (value < number){
        value= f1 +f2;
        f1 = f2;
        f2 = value;
    }
    }
    if (number == value) result =1;
    return result;
}

int main(){
    int num, result ;
    do {
        num =input_number();
    } while (num<=0);
    result = check_fibo(num);
    if (result==1) printf("ok");
    else printf("not");
    getchar();
    return 0;
}