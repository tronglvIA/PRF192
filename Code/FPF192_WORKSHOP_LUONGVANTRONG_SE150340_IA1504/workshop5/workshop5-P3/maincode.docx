#include<stdio.h>
#include<stdlib.h>
#include"Character data.c"
#include"checkday.c"
#include"menu.c"
#include<stdbool.h>


int main(){
    int fun,n,day,month,year;
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
            printf("Day = ");
            scanf("%d", &day);
            printf("Month = ");
            scanf("%d", &month);
            printf("Year = ");
            scanf("%d", &year);
            if (check_day(day,month,year)) printf("The data is valid");
                else printf("The data is not");
            break;
        case 2:
            printf_char();
            break;
        case 3:
            exit(0);
            break;
    }
    getchar();
    return 0;
}