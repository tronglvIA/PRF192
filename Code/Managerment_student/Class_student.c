#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Student
{
    char name[220];
    int age;
    long id;
    float math, physics, chemistry;
};


int n,key;
char after;





// Dynamic allocation memory for functions input.
struct Student* Input(){ 
   // Inputing the number of students with correct data.
    bool check_data=false;
    do{
        fflush(stdin);
        if (check_data){
            system("cls");
            printf("---------------------Processing Function 1--------------\n");
            check_data = false;
        }
        printf("The number of Student = ");
        check_data =true;
    } while (scanf("%d%c",&n,&after) !=2 || after !='\n' || n<=0);
    check_data = false;
    struct Student *students = (struct Student*)malloc(n*sizeof(struct Student));
    int i;
    //Enter data for n students
    for (i=0; i<n; i++){
        printf("\t\t\t+ Student number %d:\n",i+1);
        printf("\tEnter the student's name : "); scanf("%s",&(students+i)->name);
        printf("\tEnter the student's ID : "); scanf("%ld",&(students+i)->id);
        printf("\tEnter the student's age : "); scanf("%d",&(students+i)->age);
        printf("\tEnter the mark's math : "); scanf("%f",&(students+i)->math);
        printf("\tEnter the mark's physics : "); scanf("%f",&(students+i)->physics);
        printf("\tEnter the mark's chemistry : "); scanf("%f",&(students+i)->chemistry);
    }
    return students;
}

void Display(struct Student* students){
    printf("+-----------------------------------------------------------------------------------------+\n");
    printf("|Name          |ID          |age           |math           |physics          |chemistry\n");
    printf("+-----------------------------------------------------------------------------------------+\n");
    for (int i=0; i<n;i++){
        printf("%s",(*(students+i)).name);
        printf("%10ld", (*(students+i)).id);
        printf("%10d", (*(students+i)).age);
        printf("%10f", (*(students+i)).math);
        printf("%10f", (*(students+i)).physics);
        printf("%10f\n", (*(students+i)).chemistry);
    }
}

// void Sorted(struct Student* students){
//     for (int i=0; i<n-1; i++)
//         for (int j=0; j<n-i-j; j++)
//             if ((*(students+i)).math)
//     Display(students);
// }
