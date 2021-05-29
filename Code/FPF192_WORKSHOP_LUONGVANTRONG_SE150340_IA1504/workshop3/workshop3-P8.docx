#include<stdio.h>

double makeDouble(int integral, long fraction){
    double result;
    int count= 10;
    while (fraction/count !=0){
        count*=10;
    }
    if (integral > 0) result = integral + (double)fraction/count;
    else  result = integral + ((double)fraction/count)*-1;
    return result;
}

int main(){
    int integral, fraction;
    printf("Input integral part = ");
    scanf("%d",&integral);
    do {
        printf("Input fraction part = ");
        scanf("%d",&fraction);
    }   while (fraction<0);
    printf("Value = %lf", makeDouble(integral,fraction));
    getchar();
    return 0;
}