#include<stdio.h>
#include"1-Print min, max digit in an integer.c"
#include"2-Process Primes.c"
#include"menu.c"
#include"Data Input.c"

int main(){
    int fun,n;
    char opinion;
    menu();
// do{}while => check is data input accepted true or not? if no exit. 
    do{
        printf(" + Please chossing the function that you want to run: ");
        scanf("%d",&fun);
        if ((fun>3) || (fun<=0)){
            printf("======> Do you want to exit the program? [Y/N] : ");
            fflush(stdin);
            scanf("%c",&opinion);
            if (opinion=='y' || opinion =='Y') exit(0);
        }
    } while (fun>3 || fun <=0);
    switch (fun)
    {
        case 1:
            n = Data();
            max_min_digits(n);
            break;
        case 2:
            n= Data();
            if (check_prime(n)==true) printf("%d is the prime.", n);
                else printf("%d is not the prime", n);
            break;
        case 3:
            exit(0);
            break;
    }
    getchar();
    return 0;
}