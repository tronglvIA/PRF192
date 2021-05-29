#include<stdio.h>

void max_min_digits(int number){
    int digit, max=0, min=number%10;
    while (number !=0){
        digit = number %10;
        if (digit > max ) max = digit;
        if (digit < min ) min = digit;
        number = number/10;
    }
    printf("\t-------------------------RESULT--------------------\n");
    printf("MAX DIGIT = %d \n", max);
    printf("MIN DIGIT = %d ", min);
}