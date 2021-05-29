#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#include"menu.c"
#include"class_student.c"


int key; 
char after,choice=NULL;



int main(){
    struct Student* students;
    bool check_data=false;
    LABEL1:
    menu();
    // Choice a Function in the table with correct data.
    do {
        fflush(stdin);
        if (check_data){
            system("cls");
            menu();
            check_data = false;
        }
        printf("The functions that you want = ");
        check_data = true;
    } while(scanf("%d%c",&key,&after) !=2 || after != '\n'|| key <0 || key >5 );
    check_data=false;
    
    switch (key){
        case 1:
            printf("You was choosed 1 Function:\n");
            students = Input();
            goto LABEL2;
            break;   
        case 2:
            printf("You was choosed 2 Function:\n");
            Display(students);
            goto LABEL2;
            break;   
         case 3:
            // printf("You was choosed 3 Function:\n");
            // sorted(students);
            // goto LABEL2;
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            printf("Exit the program.");
            exit(0);
            break;
    }

    LABEL2:
    printf("\t\t\t\t\n*Do you want to continue?\n");
    printf("\t\tYes! press 'Y' or 'y'.\n");
    printf("\t\tNO! press 'n'or 'N'.\n");
    printf("\t\tTo clean the screen press 'C' or 'c'.\n");
    printf("Your choice = ");
    getchar();
    choice=getchar();
    printf("check choice = %c", choice);
    switch (choice){
        case 'y':
            goto LABEL1;
            break;
        case 'Y':
            goto LABEL1;
            break;
        case 'n':
            exit(0);
            break;
        case 'N':
            exit(0);
            break;
        case 'c':
            system("cls");
            goto LABEL2;
            break;
        case 'C':
            system("cls");
            goto LABEL2;
            break;
        default:
            goto LABEL2;
            break;
    }
    return 0;
}
