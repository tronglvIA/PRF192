#include<stdio.h>
#include<stdlib.h>
#include"Quadratic_equation.c"
#include"Bank_deposit_problem.c"
#include"menu.c"
#include<stdbool.h>



int main(){
    int fun;
    char opinion;
    double a,b,c;
    char after;
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
            
            break;
        case 2:
            // Input validations a b c with data correct and a !=0
            do{
                printf("Input A B C of equation.\n");
                do{
                    fflush(stdin);
                    printf("A = ");
                } while (scanf("%lf%c",&a,&after) != 2 || a==0 || after != '\n');
                do{
                    fflush(stdin);
                    printf("B = ");
                } while (scanf("%lf%c",&b,&after)!=2 || after != '\n');
                do{
                    fflush(stdin);
                    printf("C = ");
                } while (scanf("%lf%c",&c,&after)!=2 || after != '\n');
            }while (a==0);
            Equation(a,b,c);
            break;
        case 3:
            exit(0);
            break;
    }
    getchar();
    return 0;
}