#include<stdio.h>
#include"2-Check a date.c"
#include"1-Fibonacci sequence.c"
#include"menu.c"


int main(){
    int day,month,year,fun,n;
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
            printf("How many Fibonacci number you want = ");
            scanf("%d",&n);
            fibo(n);
            getchar();
            break;
        case 2:
            printf("Day = ");
            scanf("%d", &day);
            printf("Month = ");
            scanf("%d", &month);
            printf("Year = ");
            scanf("%d", &year);
            if (check_date(day,month,year)==true) printf("Date is the valid.");
                else printf("Date is not valid");
            break;
        case 3:
            exit(0);
            break;
    }
    getchar();
    return 0;
}
