#include<stdio.h>

int sumdigits(int number){
    int result=0, digit;
    while (number != 0){
        digit= number % 10;
        result = result + digit;
        number = number / 10;
    }
    return result;
}

int main(){
   int result=0, num;
    do {
        printf("Input The number = ");
        scanf("%d",&num);
        if (num > 0 ) result = result + sumdigits(num);
    } while(num > 0);
    printf("result = %d ", result);
    getchar();
    return 0;
}