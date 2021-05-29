#include<stdio.h>
#include <stdlib.h>
#include"check_prime.c"
#include"factorial.c"
#include"printf_char.c"
#include"menu.c"

int main(){
    char opinion;
    int fun,n,result;
    menu();
    do{
        printf(" + Please chossing the function that you want to run: ");
        scanf("%d",&fun);
        if ((fun>4) || (fun<=0)){
            printf("======> Do you want to exit the program? [Y/N] : ");
            fflush(stdin);
            scanf("%c",&opinion);
            if (opinion=='y' || opinion =='Y') exit(0);
        }
    } while (fun>4 || fun <=0);
    switch (fun)
    {
        case 1:
            do{
                printf("Enter N = ");
                scanf("%d",&n);
            } while (n<=0);
            printf("The result = %d ", sum_prime_first(n));
            break;
        case 2:
            do{
                printf("Enter N = ");
                scanf("%d",&n);
            } while (n<=0);
            printf(" + The result = %lf ", average_prime(n));
            break;
        case 3:
            do{
                printf("Enter N = ");
                scanf("%d",&n);
            } while (n<=0 || n>=100);
            printf(" + The result = %lf ", factotial(n));
            break;
        case 4:
            printf_char();
            break;
    }
    getchar();
    return 0;
}